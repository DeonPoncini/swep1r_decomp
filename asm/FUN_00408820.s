; FUN_00408820
MOV EAX,[0x004b4330]
PUSH ESI
PUSH EDI
MOV ECX,0x9
MOV ESI,0x4b4320
MOV EDI,0xec86a0
MOVSD.REP ES:EDI,ESI
XOR ECX,ECX
MOV EDX,0x1
CMP EAX,ECX
MOV EAX,[0x004b431c]
JZ 0x00408852
CMP EAX,ECX
MOV dword ptr [0x00ec86b0],EDX
JNZ 0x00408858
MOV dword ptr [0x00ec86b0],ECX
CMP dword ptr [0x00ec86b4],ECX
JZ 0x0040886a
CMP EAX,ECX
MOV dword ptr [0x00ec86b4],EDX
JNZ 0x00408870
MOV dword ptr [0x00ec86b4],ECX
POP EDI
POP ESI
RET
