; FUN_0044e620
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESI + 0x2c]
TEST EAX,EAX
JNZ 0x0044e636
MOV EAX,dword ptr [ESP + 0xc]
MOV EAX,dword ptr [ESI + EAX*0x4 + 0x10]
POP ESI
RET
MOV ECX,dword ptr [ESP + 0xc]
TEST ECX,ECX
MOV EDX,dword ptr [ESI + ECX*0x4 + 0x10]
JZ 0x0044e644
SAR EAX,CL
MOV ECX,EAX
MOV EAX,EDX
SHL EAX,0x3
SUB EAX,EDX
LEA EDX,[EAX + EAX*0x2]
LEA EAX,[ECX + EDX*0x2]
MOV ECX,dword ptr [ESI]
POP ESI
MOV EDX,dword ptr [ECX + 0xc]
MOVSX EAX,word ptr [EDX + EAX*0x2 + 0x42]
RET
