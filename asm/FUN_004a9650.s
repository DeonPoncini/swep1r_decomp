; FUN_004a9650
PUSH ESI
MOV ESI,dword ptr [ESP + 0xc]
TEST ESI,ESI
PUSH EDI
JZ 0x004a9749
MOV EDI,dword ptr [ESP + 0x14]
TEST EDI,EDI
JZ 0x004a9749
MOV AL,byte ptr [ESI]
TEST AL,AL
JNZ 0x004a9686
MOV EAX,dword ptr [ESP + 0xc]
TEST EAX,EAX
JZ 0x004a9749
MOV word ptr [EAX],0x0
XOR EAX,EAX
POP EDI
POP ESI
RET
MOV ECX,dword ptr [0x00dfab38]
TEST ECX,ECX
JNZ 0x004a96ab
MOV ECX,dword ptr [ESP + 0xc]
TEST ECX,ECX
JZ 0x004a9741
MOVZX AX,AL
MOV word ptr [ECX],AX
MOV EAX,0x1
POP EDI
POP ESI
RET
MOV ECX,dword ptr [0x004d1d90]
AND EAX,0xff
TEST byte ptr [ECX + EAX*0x2 + 0x1],0x80
JZ 0x004a970d
MOV EAX,[0x004d1f9c]
CMP EAX,0x1
JLE 0x004a96f1
CMP EDI,EAX
JL 0x004a96f3
MOV ECX,dword ptr [ESP + 0xc]
XOR EDX,EDX
TEST ECX,ECX
SETNZ DL
PUSH EDX
PUSH ECX
PUSH EAX
MOV EAX,[0x00dfab48]
PUSH ESI
PUSH 0x9
PUSH EAX
CALL dword ptr [0x004ac174]
TEST EAX,EAX
MOV EAX,[0x004d1f9c]
JNZ 0x004a974b
CMP EDI,EAX
JC 0x004a9730
MOV CL,byte ptr [ESI + 0x1]
TEST CL,CL
JNZ 0x004a974b
CALL 0x004a3dc0
MOV dword ptr [EAX],0x2a
OR EAX,0xffffffff
POP EDI
POP ESI
RET
MOV EAX,dword ptr [ESP + 0xc]
XOR ECX,ECX
MOV EDX,dword ptr [0x00dfab48]
TEST EAX,EAX
SETNZ CL
PUSH ECX
PUSH EAX
PUSH 0x1
PUSH ESI
PUSH 0x9
PUSH EDX
CALL dword ptr [0x004ac174]
TEST EAX,EAX
JNZ 0x004a9741
CALL 0x004a3dc0
MOV dword ptr [EAX],0x2a
OR EAX,0xffffffff
POP EDI
POP ESI
RET
MOV EAX,0x1
POP EDI
POP ESI
RET
XOR EAX,EAX
POP EDI
POP ESI
RET
