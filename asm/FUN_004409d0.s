; FUN_004409d0
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
PUSH EBX
MOV DL,byte ptr [EAX]
MOV BL,byte ptr [ECX]
CMP DL,BL
JNZ 0x004409fc
MOV DL,byte ptr [EAX + 0x1]
MOV BL,byte ptr [ECX + 0x1]
CMP DL,BL
JNZ 0x004409fc
MOV AL,byte ptr [EAX + 0x2]
MOV DL,byte ptr [ECX + 0x2]
CMP AL,DL
JNZ 0x004409fc
MOV EAX,0x1
POP EBX
RET
XOR EAX,EAX
POP EBX
RET
