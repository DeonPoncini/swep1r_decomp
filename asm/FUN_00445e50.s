; FUN_00445e50
MOV EAX,dword ptr [ESP + 0x18]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0xc]
TEST EAX,EAX
JLE 0x00445ecb
PUSH EDI
PUSH EBP
MOV EBP,dword ptr [ESP + 0x20]
PUSH EBX
MOV dword ptr [ESP + 0x20],EAX
MOV EDI,dword ptr [ESP + 0x14]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00445ea1
MOV ECX,EDI
XOR EAX,EAX
XOR EBX,EBX
MOV AL,byte ptr [ESI]
INC ESI
ADD EDX,0x2
MOV AX,word ptr [EBP + EAX*0x2]
MOV BH,AL
MOV BL,AH
MOV EAX,EBX
MOV BX,AX
SHR BX,0x1
SHL EAX,0xf
OR EBX,EAX
DEC EDI
MOV word ptr [EDX + -0x2],BX
JNZ 0x00445e7a
MOV EBX,dword ptr [ESP + 0x1c]
CMP ECX,EBX
JGE 0x00445ebd
SUB EBX,ECX
XOR EAX,EAX
MOV ECX,EBX
MOV EDI,EDX
SHR ECX,0x1
STOSD.REP ES:EDI
ADC ECX,ECX
LEA EDX,[EDX + EBX*0x2]
STOSW.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x20]
DEC EAX
MOV dword ptr [ESP + 0x20],EAX
JNZ 0x00445e6e
POP EBX
POP EBP
POP EDI
MOV ECX,dword ptr [ESP + 0x1c]
POP ESI
MOV dword ptr [ECX],EDX
RET
