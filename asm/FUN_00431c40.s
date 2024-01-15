; FUN_00431c40
SUB ESP,0x7c
PUSH EDI
CALL 0x00488a80
MOV EDX,EAX
MOV ECX,0x1f
XOR EAX,EAX
LEA EDI,[ESP + 0x4]
STOSD.REP ES:EDI
PUSH 0x0
LEA ECX,[ESP + 0x8]
PUSH 0x1
MOV dword ptr [ESP + 0xc],0x7c
MOV EAX,dword ptr [EDX]
PUSH ECX
PUSH 0x0
PUSH EDX
CALL dword ptr [EAX + 0x64]
MOV EDX,dword ptr [ESP + 0x88]
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x58]
POP EDI
MOV dword ptr [EDX],EAX
MOV EDX,dword ptr [ESP + 0x80]
MOV EAX,dword ptr [ESP + 0x88]
SHR ECX,0x3
MOV dword ptr [EDX],ECX
MOV ECX,dword ptr [ESP + 0x24]
MOV dword ptr [EAX],ECX
MOV EDX,dword ptr [0x00df7f2c]
MOV EAX,dword ptr [EDX + 0x48]
MOV EDX,dword ptr [ESP + 0x8c]
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [EDX],ECX
MOV EAX,[0x00df7f2c]
MOV ECX,dword ptr [EAX + 0x48]
MOV EAX,dword ptr [ESP + 0x90]
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX],EDX
ADD ESP,0x7c
RET
