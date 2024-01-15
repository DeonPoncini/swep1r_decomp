; FUN_00473e40
SUB ESP,0x80
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8c]
LEA EAX,[ESP + 0x44]
PUSH 0x3f800000
LEA ECX,[ESI + 0xac]
PUSH EAX
PUSH ECX
CALL 0x0044eeb0
ADD ESP,0xc
LEA EDX,[ESP + 0x44]
LEA EAX,[ESP + 0x74]
LEA ECX,[ESP + 0x4]
PUSH EDX
PUSH 0x42480000
PUSH EAX
PUSH ECX
CALL 0x0042fa80
FLD dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x18]
FSUB dword ptr [0x004adb98]
ADD ESP,0x10
MOV dword ptr [ESP + 0x28],EDX
LEA ECX,[ESP + 0x1c]
MOV dword ptr [ESP + 0x2c],EAX
LEA EDX,[ESP + 0x10]
PUSH ECX
MOV ECX,dword ptr [ESI + 0x13c]
LEA EAX,[ESP + 0x2c]
FST dword ptr [ESP + 0x10]
FSTP dword ptr [ESP + 0x34]
PUSH EDX
PUSH EAX
PUSH ECX
MOV dword ptr [ESP + 0x50],0x44bb8000
MOV dword ptr [ESP + 0x44],0x0
MOV dword ptr [ESP + 0x48],0x0
MOV dword ptr [ESP + 0x4c],0xbf800000
CALL 0x00444d10
FCOMP dword ptr [0x004adba0]
ADD ESP,0x10
FNSTSW AX
TEST AH,0x1
JZ 0x00473f13
FLD dword ptr [ESP + 0x74]
MOV EAX,dword ptr [ESP + 0x88]
MOV EDX,dword ptr [ESP + 0x78]
MOV ECX,dword ptr [ESP + 0x7c]
FSTP dword ptr [EAX]
MOV dword ptr [EAX + 0x4],EDX
MOV dword ptr [EAX + 0x8],ECX
POP ESI
ADD ESP,0x80
RET
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [0x004adba8]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESP + 0x88]
POP ESI
FSTP dword ptr [EAX]
FSTP dword ptr [EAX + 0x4]
FSTP dword ptr [EAX + 0x8]
ADD ESP,0x80
RET
