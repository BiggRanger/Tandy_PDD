;----------------------------------------------------------
;Hitachi 6301 Directive File
;----------------------------------------------------------
cpu		6301
;----------------------------------------------------------

;----------------------------------------------------------
;symbols describing registers of the HD63A03V1
;----------------------------------------------------------
box		0x0000	0x001F	;INTERNAL DEVICE REGISTERS
data	0x0000	byte	hex	(register)PORT1Direction
data	0x0001	byte	hex	(register)PORT2Direction
data	0x0002	byte	hex	(register)PORT1Data
data	0x0003	byte	hex	(register)PORT2Data
data	0x0004	byte	hex	(register)PORT3Direction
data	0x0005	byte	hex	(register)PORT4Direction
data	0x0006	byte	hex	(register)PORT3Data
data	0x0007	byte	hex	(register)PORT4Data
data	0x0008	byte	hex	(register)TimerControlAndStatus
data	0x0009	byte	hex	(register)TimerCounterHi
data	0x000A	byte	hex	(register)TimerCounterLow
data	0x000B	byte	hex	(register)TimerOutputCompareHi
data	0x000C	byte	hex	(register)TimerOutputCompareLow
data	0x000D	byte	hex	(register)TimerInputCaptureHi
data	0x000E	byte	hex	(register)TimerInputCaptureLow
data	0x000F	byte	hex	(register)Port3ControlAndStatus
data	0x0010	byte	hex	(register)SCI_RateAndModeControl
data	0x0011	byte	hex	(register)SCI_TxRxControlAndStatus
data	0x0012	byte	hex	(register)SCI_RxData
data	0x0013	byte	hex	(register)SCI_TxData
data	0x0014	byte	hex	(register)RAMControl
data	0x0015	byte	hex	(register)Reserved[15]
data	0x0016	byte	hex	(register)Reserved[16]
data	0x0017	byte	hex	(register)Reserved[17]
data	0x0018	byte	hex	(register)Reserved[18]
data	0x0019	byte	hex	(register)Reserved[19]
data	0x001A	byte	hex	(register)Reserved[1A]
data	0x001B	byte	hex	(register)Reserved[1B]
data	0x001C	byte	hex	(register)Reserved[1C]
data	0x001D	byte	hex	(register)Reserved[1D]
data	0x001E	byte	hex	(register)Reserved[1E]
data	0x001F	byte	hex	(register)Reserved[1F]
;----------------------------------------------------------
;reset and interrupt vectors
;----------------------------------------------------------
box		0xFFF0	0xFFFF	;RESET AND INTERRUPT VECTORS
data	0xFFF0	word	hex	(vector)IRQ2SIO
data	0xFFF2	word	hex	(vector)IRQ2TOI
data	0xFFF4	word	hex	(vector)IRQ2OCI
data	0xFFF6	word	hex	(vector)IRQ2ICI
data	0xFFF8	word	hex	(vector)IRQ1
data	0xFFFA	word	hex	(vector)SWI
data	0xFFFC	word	hex	(vector)NMI
data	0xFFEE	word	hex	(vector)TRAP
data	0xFFFE	word	hex	(vector)RESET
;----------------------------------------------------------