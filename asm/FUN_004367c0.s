; FUN_004367c0
SUB ESP,0x6c
MOV AL,[0x004d55cc]
PUSH ESI
PUSH EDI
MOV byte ptr [ESP + 0x8],AL
MOV ESI,dword ptr [ESP + 0x78]
MOV ECX,0x1a
XOR EAX,EAX
LEA EDI,[ESP + 0x9]
STOSD.REP ES:EDI
STOSB ES:EDI
CMP dword ptr [ESI + 0xc],0x9
JNZ 0x004367f7
MOVSX EAX,byte ptr [ESI + 0x6f]
LEA ECX,[EAX + EAX*0x4]
SHL ECX,0x4
MOV byte ptr [ECX + 0xe35a84],0x0
MOVSX ECX,byte ptr [ESI + 0x6f]
LEA EAX,[ECX + ECX*0x4]
SHL EAX,0x4
CMP byte ptr [EAX + 0xe35a81],0x1
JNZ 0x0043681b
MOVSX EDX,byte ptr [EAX + 0xe35a82]
PUSH ECX
PUSH EDX
CALL 0x0044e530
ADD ESP,0x8
CALL 0x0044e560
MOV ECX,0x8
XOR EAX,EAX
MOV EDI,0x50c4c0
MOV dword ptr [0x004c0204],0xffffffff
STOSD.REP ES:EDI
MOV [0x0050c4b8],EAX
MOV [0x0050c4b4],EAX
MOV EAX,dword ptr [ESI + 0xc]
PUSH EAX
PUSH ESI
CALL 0x00454d40
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0x6c
RET
