; FUN_00407800
XOR EAX,EAX
MOV EDX,dword ptr [ESP + 0x4]
MOV [0x00ec8830],EAX
PUSH EDI
MOV [0x00ec8834],EAX
MOV ECX,0xf
MOV [0x00ec8838],EAX
MOV EDI,0xec8840
STOSD.REP ES:EDI
MOV ECX,0xf
MOV EDI,0xec88a0
TEST EDX,EDX
MOV [0x00ec883c],EAX
STOSD.REP ES:EDI
JL 0x00407839
JNZ 0x00407847
MOV ECX,0xc3
XOR EAX,EAX
MOV EDI,0x4d5fc0
STOSD.REP ES:EDI
TEST EDX,EDX
JL 0x00407850
CMP EDX,0x1
JNZ 0x0040785e
MOV ECX,0xc3
XOR EAX,EAX
MOV EDI,0x4d6518
STOSD.REP ES:EDI
TEST EDX,EDX
JL 0x00407867
CMP EDX,0x2
JNZ 0x00407875
MOV ECX,0xc3
XOR EAX,EAX
MOV EDI,0x4d6828
STOSD.REP ES:EDI
TEST EDX,EDX
JGE 0x0040788f
XOR ECX,ECX
MOV dword ptr [0x004d5e20],ECX
MOV dword ptr [0x004d5e24],ECX
MOV dword ptr [0x004d5e28],ECX
POP EDI
RET
MOV dword ptr [EDX*0x4 + 0x4d5e20],0x0
POP EDI
RET