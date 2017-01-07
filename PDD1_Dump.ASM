		.org $8515
		LDX #$F000	;set start to copy at F000
address	LDAB #$08	;address label counter "F000: "
		LDAA #$D	;CR
		BSR	txSendA
		LDAA #$A	;LF
		BSR	txSendA
		PSHX		;put X (memory pointer) into stack
		PULA		;load into A the Hi byte of the pointer
		CMPA #$00	;check if memory pointer is at 00 (we wrapped)
		BEQ done	;we wrap we quit (don't care about the stack)
		BSR txSendv	;Send HEX value of Hi Byte
		PULA		;load into A the Low byte of the pointer
		BSR txSendv ;Send HEX value of Low Byte
		LDAA #$3A	;':'
		BSR	txSendA
data	LDAA ,X		;Load memory value at pointer into ACCA
		BSR	txSendv ;Send HEX value of ACCA byte
		LDAA #$20	;' '
		BSR	txSendA
		INX			;increment memory pointer
		DECB		;decrement address label counter
		CMPB #$00	;if address counter = 0 then make new label
		BEQ address	;address label counter is 0, make new line
		BRA data	;print next piece of data
done 	LDAA #$58	;print 'X' we're terminated
		BSR	txSendA
INF		BRA INF		;loop infinity

txSendA	PSHB		;output ASCII characters to SCI, do not use IRQ2
loop	LDAB $11	;get serial control register
		ANDB #$20	;check bit 5, this is high when ready to send
		BEQ loop
		STAA $13	;put byte into TX register
		PULB
		RTS

txSendv	PSHA		;Take value in ACCA and output 2 bytes in ASCII HEX
		LSRA		;move MSB to LSB
		LSRA		;4x, this also makes MSB 0 
		LSRA
		LSRA
		BSR report	;Print first ASCII HEX value
		PULA		;Get A again and print second ASCII HEX value
		ANDA #$0F	;mask out MSB
report	CMPA #$0A
		BMI add30	;<0A (0-9) then only add 30h
		ADDA #$07	;=>0A (A-F) add 07h
add30	ADDA #$30	;add 30h (makes bin 0-9 into hex 30-39)
		BSR txSendA
		RTS
