; FUN_00483be0
MOV EAX,dword ptr [ESP + 0x4]
SUB ESP,0x40
CMP EAX,0x2
JL 0x00483c9a
FLD dword ptr [0x00dfb254]
CALL 0x0049ed20
FLD dword ptr [0x00dfb250]
PUSH EAX
CALL 0x0049ed20
FLD dword ptr [0x00dfb24c]
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH 0x4c7d40
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
LEA EAX,[ESP + 0x10]
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x14
LEA ECX,[ESP]
PUSH ECX
PUSH 0xd6
PUSH 0x11d
PUSH 0x4
CALL 0x00450590
ADD ESP,0x10
CALL 0x0045d390
FCOM dword ptr [0x004ae080]
FNSTSW AX
TEST AH,0x41
JNZ 0x00483c98
SUB ESP,0x8
FSTP qword ptr [ESP]
PUSH 0x4c7d30
CALL 0x00421360
ADD ESP,0x4
LEA EDX,[ESP + 0x8]
PUSH EAX
PUSH EDX
CALL 0x0049eb80
ADD ESP,0x10
LEA EAX,[ESP]
PUSH EAX
PUSH 0xc2
PUSH 0x12c
PUSH 0x4
CALL 0x00450590
ADD ESP,0x10
ADD ESP,0x40
RET
FSTP ST0
ADD ESP,0x40
RET
