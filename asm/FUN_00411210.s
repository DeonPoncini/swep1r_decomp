; FUN_00411210
SUB ESP,0x10
LEA EAX,[ESP]
PUSH EAX
PUSH 0x3f8
CALL 0x00417150
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x10]
ADD ESP,0x8
SUB ECX,EAX
MOV EAX,dword ptr [ESP + 0x1c]
PUSH 0x0
PUSH 0x200000
PUSH ECX
MOV ECX,dword ptr [ESP + 0xc]
SUB EDX,ECX
MOV ECX,dword ptr [ESP + 0x24]
PUSH EDX
PUSH EAX
PUSH ECX
PUSH 0x4b5dc8
CALL 0x00421360
MOV EDX,dword ptr [ESP + 0x30]
ADD ESP,0x4
PUSH EAX
PUSH 0x6
PUSH 0x2
PUSH EDX
CALL 0x004132a0
ADD ESP,0x28
ADD ESP,0x10
RET
