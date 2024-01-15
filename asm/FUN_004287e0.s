; FUN_004287e0
MOVSX EAX,word ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
SHL EAX,0x5
MOV EDX,dword ptr [EAX + 0xe9ba74]
LEA EAX,[EAX + 0xe9ba74]
OR EDX,ECX
MOV dword ptr [EAX],EDX
RET
