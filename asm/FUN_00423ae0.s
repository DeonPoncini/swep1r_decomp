; FUN_00423ae0
PUSH ESI
MOV ESI,dword ptr [ESP + 0xc]
TEST ESI,ESI
JZ 0x00423b53
MOV EAX,[0x0050b5d0]
TEST EAX,EAX
JNZ 0x00423b2a
MOV EAX,[0x0050b560]
TEST EAX,EAX
JNZ 0x00423b11
MOV EAX,[0x0050b568]
TEST EAX,EAX
JNZ 0x00423b11
MOV EAX,dword ptr [ESP + 0x8]
PUSH 0x3
PUSH EAX
CALL dword ptr [0x004ac1e8]
CALL 0x004238a0
PUSH 0x1
CALL 0x00488100
ADD ESP,0x4
CALL 0x0048ac50
CALL 0x004238a0
PUSH 0x0
MOV dword ptr [0x004b7a38],0x423580
MOV dword ptr [0x0050b5d0],0x1
CALL 0x004804b0
ADD ESP,0x4
PUSH ESI
CALL 0x00485a30
ADD ESP,0x4
POP ESI
RET
PUSH 0x0
MOV dword ptr [0x004b7a38],0x423cb0
CALL 0x00488100
ADD ESP,0x4
MOV dword ptr [0x0050b5d0],0x0
PUSH 0x1
CALL 0x004804b0
ADD ESP,0x4
PUSH ESI
CALL 0x00485a30
ADD ESP,0x4
POP ESI
RET
