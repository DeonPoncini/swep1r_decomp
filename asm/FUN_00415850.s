; FUN_00415850
MOV EAX,dword ptr [ESP + 0x8]
PUSH ESI
ADD EAX,-0x2
CMP EAX,0x47
JA 0x00415ae8
XOR ECX,ECX
MOV CL,byte ptr [EAX + 0x415b30]
JMP dword ptr [ECX*0x4 + 0x415aec]
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [EAX + 0x20]
TEST CH,0x8
JZ 0x00415ae8
PUSH EAX
CALL 0x00419140
ADD ESP,0x4
XOR EAX,EAX
POP ESI
RET
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JNZ 0x00415ae8
MOV EAX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [EAX + 0x1c]
PUSH EDX
PUSH 0x0
PUSH 0x49
PUSH EAX
CALL 0x004151a0
ADD ESP,0x10
XOR EAX,EAX
POP ESI
RET
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
MOV EAX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [EAX + 0x20]
JZ 0x004158d5
OR EDX,0x8
PUSH 0x0
MOV dword ptr [EAX + 0x20],EDX
CALL 0x004081e0
ADD ESP,0x4
XOR EAX,EAX
POP ESI
RET
AND EDX,0xfffffff7
PUSH 0x1
MOV dword ptr [EAX + 0x20],EDX
CALL 0x004081e0
ADD ESP,0x4
XOR EAX,EAX
POP ESI
RET
MOV ESI,dword ptr [ESP + 0x8]
PUSH 0x1
PUSH ESI
CALL 0x00414e60
MOV EAX,dword ptr [ESP + 0x18]
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0041590b
PUSH -0x1
PUSH ESI
CALL 0x004156a0
ADD ESP,0x8
PUSH 0x2
PUSH ESI
CALL 0x00414d90
ADD ESP,0x8
MOV [0x004d8798],EAX
TEST EAX,EAX
JZ 0x0041592e
PUSH 0x1
PUSH EAX
CALL 0x00414f10
ADD ESP,0x8
XOR EAX,EAX
POP ESI
RET
MOV ESI,dword ptr [ESI + 0xc]
TEST ESI,ESI
JZ 0x00415ae8
PUSH 0x1
PUSH ESI
MOV dword ptr [0x004d8798],ESI
CALL 0x00414f10
ADD ESP,0x8
XOR EAX,EAX
POP ESI
RET
MOV ESI,dword ptr [ESP + 0x10]
PUSH 0x0
MOV EAX,dword ptr [ESI*0x4 + 0x4d8110]
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
MOV dword ptr [ESI*0x4 + 0x4d8110],0x0
XOR EAX,EAX
POP ESI
RET
MOV EAX,[0x004d8be4]
TEST EAX,EAX
JNZ 0x00415ae8
PUSH 0x0
CALL 0x004118b0
ADD ESP,0x4
XOR EAX,EAX
POP ESI
RET
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JZ 0x004159a7
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [EAX + 0x20]
OR ECX,0x40
MOV dword ptr [EAX + 0x20],ECX
XOR EAX,EAX
POP ESI
RET
MOV ESI,dword ptr [ESP + 0x8]
PUSH ESI
CALL 0x004168f0
MOV EDX,dword ptr [ESI + 0x20]
ADD ESP,0x4
AND EDX,0xffffffbf
PUSH ESI
MOV dword ptr [ESI + 0x20],EDX
CALL 0x00417060
ADD ESP,0x4
XOR EAX,EAX
POP ESI
RET
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [EAX + 0x20]
AND ECX,0xffffffcc
MOV dword ptr [EAX + 0x20],ECX
XOR EAX,EAX
POP ESI
RET
MOV ESI,dword ptr [ESP + 0x8]
PUSH 0x0
MOV ECX,dword ptr [ESI + 0x4d4]
PUSH ECX
CALL 0x004174e0
MOV EDX,dword ptr [ESI + 0x51c]
ADD ESP,0x8
MOV dword ptr [ESI + 0x4d4],EAX
PUSH 0x0
PUSH EDX
CALL 0x004174e0
ADD ESP,0x8
MOV dword ptr [ESI + 0x51c],EAX
XOR EAX,EAX
POP ESI
RET
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [ESP + 0x8]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00416f50
ADD ESP,0xc
XOR EAX,EAX
POP ESI
RET
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [ESP + 0x8]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00416f20
ADD ESP,0xc
XOR EAX,EAX
POP ESI
RET
MOV ESI,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x10]
PUSH EAX
MOV ECX,dword ptr [ESI + 0x4d4]
PUSH ECX
CALL 0x004174e0
MOV dword ptr [ESI + 0x4d4],EAX
MOV EAX,dword ptr [ESP + 0x1c]
ADD ESP,0x8
CMP EAX,-0x1
JZ 0x00415ae8
MOV dword ptr [ESI + 0x4d8],EAX
XOR EAX,EAX
POP ESI
RET
MOV ESI,dword ptr [ESP + 0x8]
PUSH ESI
CALL 0x00414f00
MOV EAX,dword ptr [ESP + 0x14]
ADD ESP,0x4
CMP EAX,0x9
JZ 0x00415a98
CMP EAX,0x24
JBE 0x00415ae8
CMP EAX,0x28
JA 0x00415ae8
MOV ECX,dword ptr [0x004d87c8]
TEST ECX,ECX
JNZ 0x00415ae8
PUSH EAX
PUSH ESI
CALL 0x00416a40
ADD ESP,0x8
XOR EAX,EAX
POP ESI
RET
CALL 0x00415010
XOR EAX,EAX
POP ESI
RET
MOV ESI,dword ptr [ESP + 0x8]
PUSH ESI
CALL 0x00414f70
ADD ESP,0x4
PUSH ESI
CALL 0x00414f00
MOV EAX,dword ptr [ESI + 0x20]
ADD ESP,0x4
OR AL,0x2
MOV dword ptr [ESI + 0x20],EAX
XOR EAX,EAX
POP ESI
RET
CALL 0x00415010
MOV EAX,dword ptr [ESP + 0x8]
AND dword ptr [EAX + 0x20],0xfffffffd
XOR EAX,EAX
POP ESI
RET