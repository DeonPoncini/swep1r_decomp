; FUN_0041dd50
MOV EAX,[0x004d5e00]
TEST EAX,EAX
JZ 0x0041de43
MOV EAX,dword ptr [ESP + 0x8]
PUSH EDI
PUSH ESI
PUSH EBX
MOV EBX,dword ptr [ESP + 0x10]
MOV ECX,0xa
MOV ESI,EAX
MOV EDI,0xea0320
MOV dword ptr [0x004eb21c],EBX
MOVSD.REP ES:EDI,ESI
MOV dword ptr [0x004eb218],0x1
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [0x00ec7bc8],ECX
MOV EDX,dword ptr [EAX + 0xc]
MOV dword ptr [0x00ec7bcc],EDX
MOV ECX,dword ptr [EAX + 0x10]
MOV dword ptr [0x00ec7bd0],ECX
MOV EDX,dword ptr [EAX + 0x14]
MOV dword ptr [0x00ec7bd4],EDX
MOV ECX,dword ptr [EAX + 0x18]
MOV dword ptr [0x00ec7bd8],ECX
MOV EDX,dword ptr [EAX + 0x1c]
MOV dword ptr [0x00ec7bdc],EDX
MOV ECX,dword ptr [EAX + 0x20]
MOV dword ptr [0x00ec7be0],ECX
MOV EDX,dword ptr [EAX + 0x24]
MOV dword ptr [0x00ec7be4],EDX
MOV ESI,dword ptr [EAX + 0x8]
XOR EDX,EDX
MOV ECX,0xec7be8
TEST ESI,ESI
JLE 0x0041ddee
MOVSX ESI,byte ptr [EDX + EBX*0x1 + 0x73]
MOV dword ptr [ECX],ESI
MOV ESI,dword ptr [EAX + 0x8]
ADD ECX,0x4
INC EDX
CMP EDX,ESI
JL 0x0041dddc
MOV ESI,dword ptr [EAX + 0x8]
XOR EDX,EDX
TEST ESI,ESI
JLE 0x0041de0e
MOV ESI,0x4ea8f0
MOV EDI,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [ECX],EDI
MOV EDI,dword ptr [EAX + 0x8]
ADD ECX,0x4
INC EDX
CMP EDX,EDI
JL 0x0041ddfc
PUSH 0x0
PUSH 0x1
SUB ECX,0xec7bc8
PUSH -0x1
PUSH 0xec7ba0
MOV dword ptr [0x00ec7ba4],0x0
MOV word ptr [0x00ec7bc4],0x36
MOV dword ptr [0x00ec7bc0],ECX
CALL 0x0041b760
ADD ESP,0x10
POP EBX
POP ESI
POP EDI
RET
