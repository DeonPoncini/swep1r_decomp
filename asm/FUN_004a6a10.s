; FUN_004a6a10
MOV EAX,[0x00dfaeb8]
PUSH 0x1000
INC EAX
MOV [0x00dfaeb8],EAX
CALL 0x0049f270
MOV ECX,dword ptr [ESP + 0x8]
ADD ESP,0x4
TEST EAX,EAX
MOV dword ptr [ECX + 0x8],EAX
MOV EAX,dword ptr [ECX + 0xc]
JZ 0x004a6a4f
MOV EDX,dword ptr [ECX + 0x8]
OR AL,0x8
MOV dword ptr [ECX + 0xc],EAX
MOV dword ptr [ECX + 0x18],0x1000
MOV dword ptr [ECX],EDX
MOV dword ptr [ECX + 0x4],0x0
RET
OR AL,0x4
MOV dword ptr [ECX + 0x18],0x2
MOV dword ptr [ECX + 0xc],EAX
LEA EAX,[ECX + 0x14]
MOV EDX,EAX
MOV dword ptr [ECX + 0x8],EAX
MOV dword ptr [ECX],EDX
MOV dword ptr [ECX + 0x4],0x0
RET
