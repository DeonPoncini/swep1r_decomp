; FUN_00428800
MOVSX EAX,word ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
SHL EAX,0x5
NOT ECX
MOV EDX,dword ptr [EAX + 0xe9ba74]
LEA EAX,[EAX + 0xe9ba74]
AND EDX,ECX
MOV dword ptr [EAX],EDX
RET
