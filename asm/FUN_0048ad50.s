; FUN_0048ad50
PUSH ECX
MOV EDX,dword ptr [0x0052d56c]
PUSH EBX
XOR EAX,EAX
PUSH EBP
PUSH ESI
CMP EDX,EAX
PUSH EDI
JNZ 0x0048ad67
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
XOR EBX,EBX
CMP EDX,EAX
MOV dword ptr [ESP + 0x10],EAX
JBE 0x0048adbf
MOV EDI,dword ptr [ESP + 0x18]
MOV ESI,0x52d878
MOV EBP,dword ptr [EDI + 0x4]
XOR ECX,ECX
TEST EBP,EBP
JZ 0x0048ad88
CMP dword ptr [ESI + -0x4],EBP
JNZ 0x0048adaa
MOV EDX,dword ptr [EDI + 0x8]
MOV ECX,0x1
TEST EDX,EDX
JZ 0x0048ad98
CMP dword ptr [ESI],EDX
JNZ 0x0048ada4
MOV EDX,dword ptr [ESI + -0x8]
MOV ECX,0x2
CMP EDX,dword ptr [EDI]
JZ 0x0048adc3
MOV EDX,dword ptr [0x0052d56c]
CMP ECX,EBX
JLE 0x0048adb4
MOV dword ptr [ESP + 0x10],EAX
MOV EBX,ECX
ADD ESI,0x368
INC EAX
CMP EAX,EDX
JC 0x0048ad7d
MOV EAX,dword ptr [ESP + 0x10]
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
