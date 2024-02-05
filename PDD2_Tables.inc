
;----------------------------------------------------------
;Table - Unknown
;----------------------------------------------------------
box		0xFF5F	0xFF66
table	0xFF5F	8		byte	HEX		Table1
;----------------------------------------------------------

;----------------------------------------------------------
;Table - System Information
;----------------------------------------------------------
box		0xFF67	0xFF6C
table 0xFF67 	6		byte	HEX		Table_SysInfo
comment 0xFF67						;Hard sector data port address MSB
comment 0xFF68						;Hard sector data port address LSB
comment 0xFF69						;Buffer size MSB
comment 0xFF6A						;Buffer size LSB
comment 0xFF6B						;CPU type. 0x10 = HD6301
comment 0xFF6C						;Model code
;----------------------------------------------------------

;----------------------------------------------------------
;Table - Version and Settings
;----------------------------------------------------------
box		0xFF6D	0xFF78
table	0xFF6D 	12		byte	HEX		Table_Version
comment 0xFF6D						;System Version Number MSB
comment 0xFF6E						;System Version Number LSB
comment 0xFF6F						;Number of sides
comment 0xFF70						;Number of tracks MSB
comment 0xFF71						;Number of tracks LSB
comment 0xFF72						;Sector length MSB
comment 0xFF73						;Sector length LSB
comment 0xFF74						;Sectors per track
comment 0xFF75						;Directory Entries MSB
comment 0xFF76						;Directory Entries LSB
comment 0xFF77						;Max files
comment 0xFF78						;Model code
;----------------------------------------------------------

;----------------------------------------------------------
;Table - Unknown
;----------------------------------------------------------
box		0xFF79	0xFF84
table	0xFF79 	12		byte	HEX		Table4
;----------------------------------------------------------

;----------------------------------------------------------
;Table - BAUD Rate
;----------------------------------------------------------
box		0xFF85	0xFF8C	;BAUD Rate Table (Pg. 18 - 1200, 2400, 9600, 19200)
data	0xFF85	byte	bin	Table_BAUD
data	0xFF86	byte	dec
data	0xFF87	byte	bin
data	0xFF88	byte	dec
data	0xFF89	byte	bin
data	0xFF8A	byte	dec
data	0xFF8B	byte	bin
data	0xFF8C	byte	dec
comment	0xFF85						;BAUD=1200
comment	0xFF86						;BAUD_Value_B Delay Loop
comment	0xFF87						;BAUD=2400
comment	0xFF88						;BAUD_Value_B Delay Loop
comment	0xFF89						;BAUD=9600
comment	0xFF8A						;BAUD_Value_B Delay Loop
comment	0xFF8B						;BAUD=19200
comment	0xFF8C						;BAUD_Value_B Delay Loop
;----------------------------------------------------------

;----------------------------------------------------------
;Table - Address Index
;----------------------------------------------------------
box		0xFF8D	0xFFB7				;SWI_FunctionTable
table	0xFF8D	44	word	hex	SWI_FunctionTable

code	0xF824	SWI_Funct(0x00)		;SWI Call 0x00
code	0xF9BB	SWI_Funct(0x01)		;SWI Call 0x01
code	0xF998	SWI_Funct(0x02)		;SWI Call 0x02
code	0xF949	SWI_Funct(0x03)
code	0xFAFC	SWI_Funct(0x04)		;SWI Call 0x04
code	0xF9DA	SWI_Funct(0x05)
code	0xFC67	SWI_Funct(0x06)
code	0xFA68	SWI_Funct(0x07)		;SWI Call 0x07
code	0xFA63	SWI_Funct(0x08)		;SWI Call 0x08
code	0xFC74	SWI_Funct(0x09)		;SWI Call 0x09
code	0xF870	SWI_Funct(0x0A)		;SWI Call 0x0A
code	0xFE9A	SWI_Funct(0x0B)		;SWI Call 0x0B
code	0xFC92	SWI_Funct(0x0C)
code	0xFCC6	SWI_Funct(0x0D)		;SWI Call 0x0D
code	0xFC51	SWI_Funct(0x0E)		;SWI Call 0x0E
code	0xFCE0	SWI_Funct(0x14)
code	0xFDB0	SWI_Funct(0x15)

comment	0xFF8D						;SWI_Funct(0x00)
comment	0xFF8F  					;SWI_Funct(0x01)
comment	0xFF91  					;SWI_Funct(0x02)
comment	0xFF93						;SWI_Funct(0x03)
comment	0xFF95  					;SWI_Funct(0x04)
comment	0xFF97						;SWI_Funct(0x05)
comment	0xFF99						;SWI_Funct(0x06)
comment	0xFF9B  					;SWI_Funct(0x07)
comment	0xFF9D  					;SWI_Funct(0x08)
comment	0xFF9F  					;SWI_Funct(0x09)
comment	0xFFA1  					;SWI_Funct(0x0A)
comment	0xFFA3  					;SWI_Funct(0x0B)
comment	0xFFA5						;SWI_Funct(0x0C)
comment	0xFFA7  					;SWI_Funct(0x0D)
comment	0xFFA9  					;SWI_Funct(0x0E)
comment	0xFFAB  					;DelayLoop_B SWI_Funct(0x0F)
comment	0xFFAD						;SerialData_Receive SWI_Funct(0x10)
comment	0xFFAF						;SerialData_Transmit SWI_Funct(0x11)
comment	0xFFB1  					;Checksum_1 SWI_Funct(0x12)
comment	0xFFB3  					;Checksum_2 SWI_Funct(0x13)
comment	0xFFB5						;SWI_Funct(0x14)
comment	0xFFB7						;SWI_Funct(0x15)
;----------------------------------------------------------

;----------------------------------------------------------
;Tables - Command Address Index
;----------------------------------------------------------
box		0xFFB9	0xFFDE				;Command Function Table	
table	0xFFB9	38	word	hex	Command_FunctionTable

code	0xF230			Command_FMT00_CreateDirectory
code	0xF4D0			Command_FMT01_FileOpen
code	0xF495			Command_FMT02_FileClose
code	0xF69D			Command_FMT03_FileRead
code	0xF63D			Command_FMT04_File_Write
code	0xF425			Command_FMT05_FileDelete
code	0xF212			Command_FMT06_DiskFormat
code	0xF6F3			Command_FMT07_DriveStatus
code	0xF137			Command_FMT_Invalid
code	0xF75F			Command_FMT23_DriveVersionInfo
code	0xF746			Command_FMT0C_DriveCondition
code	0xF365			Command_FMT0D_FileNameChange
code	0xF801			Command_FMT30_SectorModeReadWrite
code	0xF76B			Command_FMT31_DriveMemorySet
code	0xF78E			Command_FMT32_DriveMemoryGet
code	0xF757			Command_FMT33_SystemVersionInfo
code	0xF7DC			Command_FMT34_ExecuteProgram

comment	0xFFB9			;Command_FMT00_CreateDirectory
comment	0xFFBB  		;Command_FMT01_FileOpen
comment	0xFFBD  		;Command_FMT02_FileClose
comment	0xFFBF			;Command_FMT03_FileRead
comment	0xFFC1  		;Command_FMT04_File_Write
comment	0xFFC3			;Command_FMT05_FileDelete
comment	0xFFC5			;Command_FMT06_DiskFormat
comment	0xFFC7  		;Command_FMT07_DriveStatus
comment	0xFFC9  		;Command_FMT_Invalid
comment	0xFFCB  		;Command_FMT23_DriveVersionInfo (SM Page 93)
comment	0xFFCD  		;Command_FMT_Invalid
comment	0xFFCF  		;Command_FMT_Invalid
comment	0xFFD1			;Command_FMT0C_DriveCondition
comment	0xFFD3  		;Command_FMT0D_FileNameChange
comment	0xFFD5  		;Command_FMT30_SectorModeReadWrite
comment	0xFFD7  		;Command_FMT31_DriveMemorySet
comment	0xFFD9			;Command_FMT32_DriveMemoryGet
comment	0xFFDB			;Command_FMT33_SystemVersionInfo(SM Page 92)
comment	0xFFDD  		;Command_FMT34_ExecuteProgram
;----------------------------------------------------------

bytearray	0xFFDF	15			asc	;Author

;----------------------------------------------------------
;Table - Vector Labels
;----------------------------------------------------------
comment	0xFFEE	;handels invalid opcodes
comment	0xFFF0	;jumps to RTI, does nothing
comment	0xFFF4	;jumps to RTI, does nothing
comment	0xFFF6	;jumps to RTI, does nothing
comment	0xFFF8	;jumps to RTI, does nothing
comment	0xFFFA	;jumps to SWI code
;----------------------------------------------------------
