; FUN_0042c2e0
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JL 0x0042c377
CMP EAX,0x2
JGE 0x0042c377
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0xc]
MOV dword ptr [EAX*0x4 + 0x4b94c8],ECX
LEA ECX,[EAX + EAX*0x2]
PUSH ESI
MOV ESI,dword ptr [EDX]
SHL ECX,0x2
FLD dword ptr [ESP + 0x14]
MOV dword ptr [ECX + 0xe9a3e0],ESI
MOV ESI,dword ptr [EDX + 0x4]
MOV dword ptr [ECX + 0xe9a3e4],ESI
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [ECX + 0xe9a3e8],EDX
MOV DL,byte ptr [ESP + 0x1c]
MOV ECX,0xfffffc18
POP ESI
FSTP dword ptr [EAX*0x4 + 0x4b94d0]
MOV dword ptr [EAX*0x4 + 0xe9a598],ECX
MOV dword ptr [EAX*0x4 + 0xe9a480],ECX
MOV dword ptr [EAX*0x4 + 0xe99c20],ECX
MOV CL,byte ptr [ESP + 0x14]
MOV byte ptr [EAX*0x4 + 0x4b94d8],CL
MOV CL,byte ptr [ESP + 0x1c]
MOV byte ptr [EAX*0x4 + 0x4b94d9],DL
MOV DL,byte ptr [ESP + 0x20]
MOV byte ptr [EAX*0x4 + 0x4b94da],CL
MOV byte ptr [EAX*0x4 + 0x4b94db],DL
RET
