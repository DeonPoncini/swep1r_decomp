; FUN_00413a90
MOV EAX,dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [ESP + 0x8]
PUSH ESI
MOV EDX,dword ptr [ESP + 0x8]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x20]
PUSH 0x0
PUSH 0x416690
PUSH 0x0
PUSH EAX
PUSH EDI
PUSH 0x0
PUSH -0x1
PUSH ECX
PUSH EDX
CALL 0x00416d90
MOV ECX,dword ptr [ESP + 0x38]
ADD ESP,0x24
MOV ESI,EAX
MOV EAX,dword ptr [ESP + 0x18]
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x00414b60
MOV EDX,dword ptr [ESP + 0x28]
ADD ESP,0xc
MOV dword ptr [ESI + 0x548],EDX
MOV dword ptr [ESI + 0x558],0xa
PUSH 0x0
PUSH ESI
MOV dword ptr [ESI + 0x544],EDI
MOV dword ptr [ESI + 0x18],0x6
CALL 0x00419db0
ADD ESP,0x8
PUSH 0x1
PUSH ESI
CALL 0x00414e60
ADD ESP,0x8
MOV EAX,ESI
POP EDI
POP ESI
RET
