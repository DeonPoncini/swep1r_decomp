; FUN_00479d40
SUB ESP,0x38
PUSH ESI
MOV ESI,dword ptr [ESP + 0x40]
PUSH EDI
LEA ECX,[ESP + 0x14]
LEA EDI,[ESI + 0x144]
LEA EAX,[ESI + 0x50]
PUSH EDI
PUSH 0x40c00000
PUSH EAX
PUSH ECX
CALL 0x0042fa80
FLD dword ptr [EDI]
FCHS
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESI + 0x148]
ADD ESP,0x10
LEA EDX,[ESP + 0x8]
FCHS
FSTP dword ptr [ESP + 0xc]
FLD dword ptr [ESI + 0x14c]
PUSH 0x2
LEA EAX,[ESP + 0x18]
PUSH EDX
PUSH EAX
PUSH 0x0
PUSH 0x3e4ccccd
FCHS
FSTP dword ptr [ESP + 0x24]
PUSH ESI
CALL 0x00477850
MOV EAX,dword ptr [ESI + 0x1e70]
ADD ESP,0x18
LEA ECX,[ESP + 0x8]
LEA EDX,[ESP + 0x14]
PUSH 0x2
PUSH ECX
MOV ECX,dword ptr [EAX]
PUSH EDX
PUSH 0x0
PUSH 0x0
PUSH 0x3fc99999
PUSH 0xa0000000
PUSH ECX
PUSH 0x5370726b
PUSH 0x0
PUSH -0x1
CALL 0x0041df10
MOV EDX,dword ptr [ESI + 0x150]
ADD ESP,0x2c
LEA EAX,[ESP + 0x20]
MOV dword ptr [ESP + 0x20],0x48697474
PUSH EAX
PUSH ESI
MOV dword ptr [ESP + 0x2c],0x56684c74
MOV dword ptr [ESP + 0x30],EDX
CALL 0x00450c00
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0x38
RET
