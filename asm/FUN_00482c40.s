; FUN_00482c40
MOV EAX,dword ptr [ESP + 0x14]
SUB ESP,0x58
MOV [0x00e229dc],EAX
MOV EAX,dword ptr [ESP + 0x68]
CMP EAX,0x14
MOV dword ptr [0x0050ccd0],0x0
JLE 0x00482c64
MOV EAX,0x14
MOV [0x0050cccc],EAX
MOV EAX,dword ptr [ESP + 0x64]
MOV dword ptr [ESP + 0xc],0x0
MOV dword ptr [ESP + 0x10],0x0
MOV ECX,dword ptr [EAX + 0x4]
MOV EDX,dword ptr [EAX + 0x8]
FLD dword ptr [EAX]
MOV dword ptr [ESP + 0x4],ECX
MOV dword ptr [0x00e229d4],ECX
MOV dword ptr [ESP + 0x8],EDX
MOV dword ptr [0x00e229d8],EDX
LEA ECX,[ESP + 0xc]
LEA EDX,[ESP]
PUSH ECX
PUSH EDX
MOV EDX,dword ptr [ESP + 0x64]
PUSH EAX
FST dword ptr [ESP + 0xc]
FSTP dword ptr [0x00e229d0]
LEA EAX,[ESP + 0x78]
LEA ECX,[ESP + 0x24]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x70]
PUSH 0x0
PUSH 0x0
PUSH ECX
PUSH EDX
PUSH EAX
MOV dword ptr [ESP + 0x38],0x3f800000
MOV dword ptr [0x00e229c0],0x0
MOV dword ptr [0x00e229c4],0x0
MOV dword ptr [0x00e229c8],0x3f800000
MOV dword ptr [ESP + 0x3c],0x3f800000
MOV dword ptr [ESP + 0x40],0x0
MOV dword ptr [ESP + 0x44],0x0
MOV dword ptr [ESP + 0x48],0x0
MOV dword ptr [ESP + 0x4c],0x0
MOV dword ptr [ESP + 0x50],0x3f800000
MOV dword ptr [ESP + 0x54],0x0
MOV dword ptr [ESP + 0x58],0x0
MOV dword ptr [ESP + 0x5c],0x0
MOV dword ptr [ESP + 0x60],0x0
MOV dword ptr [ESP + 0x64],0x3f800000
MOV dword ptr [ESP + 0x68],0x0
MOV dword ptr [ESP + 0x6c],0x0
MOV dword ptr [ESP + 0x70],0x0
MOV dword ptr [ESP + 0x74],0x0
MOV dword ptr [ESP + 0x78],0x3f800000
MOV dword ptr [ESP + 0x90],0x4cbebc20
CALL 0x00482820
FLD dword ptr [0x00e229d0]
MOV EAX,dword ptr [ESP + 0x94]
ADD ESP,0x24
FSTP dword ptr [EAX]
MOV ECX,dword ptr [0x00e229d4]
MOV dword ptr [EAX + 0x4],ECX
MOV EDX,dword ptr [0x00e229d8]
MOV dword ptr [EAX + 0x8],EDX
MOV EAX,dword ptr [ESP + 0x74]
FLD dword ptr [0x00e229c0]
FSTP dword ptr [EAX]
MOV ECX,dword ptr [0x00e229c4]
MOV dword ptr [EAX + 0x4],ECX
MOV EDX,dword ptr [0x00e229c8]
MOV dword ptr [EAX + 0x8],EDX
ADD ESP,0x58
RET
