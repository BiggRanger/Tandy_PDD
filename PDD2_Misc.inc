
;----------------------------------------------------------
;identify branch tricks
;----------------------------------------------------------
data	0xF1AB	byte	hex
comment 0xF1AB	;branch trick, skip next opcode
data	0xF209	byte	hex
comment 0xF209	;branch trick, skip next opcode
data	0xF264	byte	hex
comment 0xF264	;branch trick, skip next opcode
data	0xF267	byte	hex
comment 0xF267	;branch trick, skip next opcode
data	0xF28F	byte	hex
comment 0xF28F	;branch trick, skip next opcode
data	0xF3CE	byte	hex
comment 0xF3CE	;branch trick, skip next opcode
data	0xF3D1	byte	hex
comment 0xF3D1	;branch trick, skip next opcode
data	0xF432	byte	hex
comment 0xF432	;branch trick, skip next opcode
data	0xF505	byte	hex
comment	0xF505	;branch trick, skip next opcode
data	0xF508	byte	hex
comment	0xF508	;branch trick, skip next opcode
data	0xF50B	byte	hex
comment	0xF50B	;branch trick, skip next opcode
data	0xF50E	byte	hex
comment	0xF50E	;branch trick, skip next opcode
data	0xF511	byte	hex
comment	0xF511	;branch trick, skip next opcode
data	0xF514	byte	hex
comment	0xF514	;branch trick, skip next opcode
data	0xF66F	byte	hex
comment	0xF66F	;branch trick, skip next opcode
data	0xF6A5	byte	hex
comment	0xF6A5	;branch trick, skip next opcode
data	0xF6A8	byte	hex
comment	0xF6A8	;branch trick, skip next opcode
data	0xF6AB	byte	hex
comment	0xF6AB	;branch trick, skip next opcode
data	0xF7C7	byte	hex
comment	0xF7C7	;branch trick, skip next opcode
data	0xF81D	byte	hex
comment	0xF81D	;branch trick, PC+=3, skip next 2 opcodes
data	0xF925	byte	hex
comment	0xF925	;branch trick, skip next opcode
data	0xF9DE	byte	hex
comment	0xF9DE	;branch trick, PC+=3, skip next 2 opcodes
data	0xFB9E	byte	hex
comment	0xFB9E	;branch trick, skip next opcode
data	0xFBA1	byte	hex
comment	0xFBA1	;branch trick, skip next opcode
data	0xFBA6	byte	hex
comment	0xFBA6	;branch trick, skip next opcode
data	0xFBA9	byte	hex
comment	0xFBA9	;branch trick, skip next opcode
data	0xFCB1	byte	hex
comment	0xFCB1	;branch trick, skip next opcode
data	0xFD8A	byte	hex
comment 0xFD8A	;branch trick, skip next opcode
data	0xFD8F	byte	hex
comment 0xFD8F	;branch trick, skip next opcode
data	0xFD92	byte	hex
comment 0xFD92	;branch trick, skip next opcode
data	0xFD95	byte	hex
comment 0xFD95	;branch trick, skip next opcode
data	0xFD98	byte	hex
comment 0xFD98	;branch trick, skip next opcode
data	0xFEC2	byte	hex
comment	0xFEC2	;branch trick, skip next opcode
data	0xFED3	byte	hex
comment	0xFED3	;branch trick, skip next opcode
;----------------------------------------------------------

;----------------------------------------------------------
; Label SWI parameters
;----------------------------------------------------------
;Found SWI parameter values
;DB	0x00	after ASL -> 0x00	7x calls
;DB	0x01	after ASL -> 0x02	4x calls
;DB	0x02	after ASL -> 0x04	3x calls
;DB	0x04	after ASL -> 0x08	1x calls
;DB	0x07	after ASL -> 0x0E	1x calls
;DB	0x08	after ASL -> 0x10	9x calls
;DB	0x09	after ASL -> 0x12	4x calls
;DB	0x0A	after ASL -> 0x14	7x calls
;DB	0x0B	after ASL -> 0x16	3x calls
;DB	0x0D	after ASL -> 0x1A	3x calls
;DB	0x0E	after ASL -> 0x1C	2x calls
;DB	0x12	after ASL -> 0x24	6x calls
;DB	0x13	after ASL -> 0x26	3x calls

data	0xF07C	byte	hex
comment 0xF07C	;SWI Parameter
data	0xF085	byte	hex
comment 0xF085	;SWI Parameter
data	0xF09B	byte	hex
comment 0xF09B	;SWI Parameter
data	0xF0B3	byte	hex
comment 0xF0B3	;SWI Parameter
data	0xF126	byte	hex
comment 0xF126	;JSR DelayLoop_B:
data	0xF216	byte	hex
comment 0xF216	;SWI Parameter
data	0xF615	byte	hex
comment 0xF615	;SWI Parameter
data	0xF638	byte	hex
comment 0xF638	;SWI Parameter
data	0xF6F4	byte	hex
comment 0xF6F4	;SWI Parameter
data	0xF74C	byte	hex
comment 0xF74C	;SWI Parameter
data	0xF814	byte	hex
comment 0xF814	;SWI Parameter
data	0xF81C	byte	hex
comment 0xF81C	;SWI Parameter
data	0xF81F	byte	hex
comment 0xF81F	;SWI Parameter
data	0xF83B	byte	hex
comment 0xF83B	;SWI Parameter
data	0xF852	byte	hex
comment 0xF852	;SWI Parameter
data	0xF86B	byte	hex
comment 0xF86B	;SWI Parameter
data	0xF8C2	byte	hex
comment 0xF8C2	;SWI Parameter
data	0xF8D8	byte	hex
comment 0xF8D8	;SWI Parameter
data	0xF920	byte	hex
comment 0xF920	;SWI Parameter
data	0xF950	byte	hex
comment 0xF950	;SWI Parameter
data	0xF95B	byte	hex
comment 0xF95B	;SWI Parameter
data	0xF988	byte	hex
comment 0xF988	;SWI Parameter
data	0xF9A1	byte	hex
comment 0xF9A1	;SWI Parameter
data	0xF9C4	byte	hex
comment 0xF9C4	;SWI Parameter
data	0xF9E0	byte	hex
comment 0xF9E0	;SWI Parameter
data	0xFA41	byte	hex
comment 0xFA41	;SWI Parameter
data	0xFA5E	byte	hex
comment 0xFA5E	;SWI Parameter
data	0xFAF2	byte	hex
comment 0xFAF2	;SWI Parameter
data	0xFAFF	byte	hex
comment 0xFAFF	;SWI Parameter
data	0xFB0C	byte	hex
comment 0xFB0C	;SWI Parameter
data	0xFB32	byte	hex
comment 0xFB32	;SWI Parameter
data	0xFB39	byte	hex
comment 0xFB39	;SWI Parameter
data	0xFB3B	byte	hex
comment 0xFB3B	;SWI Parameter
data	0xFB3F	byte	hex
comment 0xFB3F	;SWI Parameter
data	0xFB46	byte	hex
comment 0xFB46	;SWI Parameter
data	0xFB4C	byte	hex
comment 0xFB4C	;SWI Parameter
data	0xFB4E	byte	hex
comment 0xFB4E	;SWI Parameter
data	0xFB82	byte	hex
comment 0xFB82	;SWI Parameter
data	0xFB8A	byte	hex
comment 0xFB8A	;SWI Parameter
data	0xFBAE	byte	hex
comment 0xFBAE	;SWI Parameter
data	0xFBDB	byte	hex
comment 0xFBDB	;SWI Parameter
data	0xFBEB	byte	hex
comment 0xFBEB	;SWI Parameter
data	0xFC47	byte	hex
comment 0xFC47	;SWI Parameter
data	0xFC4B	byte	hex
comment 0xFC4B	;SWI Parameter
data	0xFC99	byte	hex
comment 0xFC99	;SWI Parameter
data	0xFCF4	byte	hex
comment 0xFCF4	;SWI Parameter
data	0xFD05	byte	hex
comment 0xFD05	;SWI Parameter
data	0xFD17	byte	hex
comment 0xFD17	;SWI Parameter
data	0xFD53	byte	hex
comment 0xFD53	;SWI Parameter
data	0xFD74	byte	hex
comment 0xFD74	;SWI Parameter
data	0xFDB8	byte	hex
comment 0xFDB8	;SWI Parameter
data	0xFDC1	byte	hex
comment 0xFDC1	;SWI Parameter
data	0xFDDD	byte	hex
comment 0xFDDD	;SWI Parameter
data	0xFDE1	byte	hex
comment 0xFDE1	;SWI Parameter
;----------------------------------------------------------

;----------------------------------------------------------
; Trap calls using invalid opcodes
;----------------------------------------------------------
comment 0xF139	;Call Trap:
comment 0xF26A	;Call Trap:
comment 0xF3D4	;Call Trap:
comment 0xF435	;Call Trap:
comment 0xF4C1	;Call Trap:
comment 0xF517	;Call Trap:
comment 0xF5FB	;Call Trap:
comment 0xF6AE	;Call Trap:
;----------------------------------------------------------
