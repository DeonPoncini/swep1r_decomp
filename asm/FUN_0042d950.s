; FUN_0042d950
MOV AL,byte ptr [ESP + 0x4]
MOV CL,byte ptr [ESP + 0x8]
MOV DL,byte ptr [ESP + 0xc]
MOV [0x004bfa0c],AL
MOV AL,byte ptr [ESP + 0x10]
MOV byte ptr [0x004bfa0d],CL
MOV byte ptr [0x004bfa0e],DL
MOV [0x004bfa0f],AL
MOV dword ptr [0x00e99764],0x0
RET
