; FUN_00407ea0
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0xc]
PUSH EDI
TEST ESI,ESI
JNZ 0x00407eaf
XOR EBX,EBX
JMP 0x00407ec7
MOV EAX,[0x004d6b3c]
PUSH 0x0
ADD EAX,0x8
SHL EAX,0x5
PUSH EAX
CALL 0x00485880
ADD ESP,0x8
MOV EBX,EAX
CMP ESI,0x1
JNZ 0x00407ed0
XOR EDI,EDI
JMP 0x00407ee1
PUSH 0x0
PUSH 0x200
CALL 0x00485880
ADD ESP,0x8
MOV EDI,EAX
CMP ESI,0x2
JNZ 0x00407eea
XOR ECX,ECX
JMP 0x00407f2d
PUSH 0x0
PUSH 0x1c
CALL 0x00485880
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00407f28
PUSH EAX
PUSH 0x9c
CALL 0x00485880
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00407f28
CALL 0x00411720
TEST EAX,EAX
JNZ 0x00407f24
PUSH EAX
PUSH 0x39
CALL 0x00485880
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00407f28
XOR ECX,ECX
JMP 0x00407f2d
MOV ECX,0x1
MOV EAX,[0x004d55d4]
TEST EAX,EAX
JZ 0x00407f54
TEST ESI,ESI
JZ 0x00407f54
FLD dword ptr [0x004d5e30]
FCOMP qword ptr [0x004ac338]
FNSTSW AX
TEST AH,0x41
JNZ 0x00407f54
MOV EAX,0x1
JMP 0x00407f56
XOR EAX,EAX
TEST EBX,EBX
JNZ 0x00407f6a
TEST EDI,EDI
JNZ 0x00407f6a
TEST ECX,ECX
JNZ 0x00407f6a
TEST EAX,EAX
JNZ 0x00407f6a
POP EDI
POP ESI
POP EBX
RET
POP EDI
POP ESI
MOV EAX,0x1
POP EBX
RET
