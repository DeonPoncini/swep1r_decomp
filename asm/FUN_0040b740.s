; FUN_0040b740
SUB ESP,0x40
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x50]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x50]
PUSH 0x1
PUSH 0x0
PUSH 0xa
PUSH 0x0
PUSH 0x27
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0xa
PUSH 0x1
PUSH 0x29
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0xa
PUSH 0x2
PUSH 0x2b
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0xa
PUSH 0x3
PUSH 0x2d
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0xa
PUSH 0x4
PUSH 0x2f
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0xa
PUSH 0x5
PUSH 0x31
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0xa
PUSH 0x6
PUSH 0x33
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0xa
PUSH 0x7
PUSH 0x35
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0xa
PUSH 0x8
PUSH 0x37
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0xa
PUSH 0x9
PUSH 0x39
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
TEST EDI,EDI
JNZ 0x0040b84b
MOV EAX,[0x004d55d4]
TEST EAX,EAX
JZ 0x0040b84b
PUSH 0x1
PUSH 0x20
PUSH 0x9
PUSH 0x3
PUSH 0x40
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x10
PUSH 0x9
PUSH 0x3
PUSH 0x43
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
CMP EDI,0x2
PUSH 0x1
JZ 0x0040ba11
PUSH 0x0
PUSH 0x5
PUSH 0x0
PUSH 0x3d
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0x5
PUSH 0x2
PUSH 0x3e
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0x5
PUSH 0x3
PUSH 0x3f
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0x6
PUSH 0x6
PUSH 0x3c
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x0
PUSH 0x6
PUSH 0x2
PUSH 0x3b
PUSH ESI
PUSH EDI
CALL 0x0040c670
ADD ESP,0x1c
MOV EBX,0xec8880
TEST EDI,EDI
JZ 0x0040b8c6
MOV EBX,0xec8790
PUSH 0x55
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [EBX]
ADD ESP,0x8
PUSH ECX
PUSH EAX
CALL 0x00414420
ADD ESP,0x8
PUSH 0x56
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [EBX + 0x4]
ADD ESP,0x8
PUSH EDX
PUSH EAX
CALL 0x00414420
ADD ESP,0x8
PUSH 0x57
PUSH ESI
CALL 0x00414d90
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0040b911
MOV ECX,dword ptr [EBX + 0x8]
PUSH ECX
PUSH EAX
CALL 0x00414420
ADD ESP,0x8
TEST EDI,EDI
JNZ 0x0040b982
PUSH 0x4d
PUSH ESI
CALL 0x00414d90
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0040b937
MOV EDX,dword ptr [EAX + 0x20]
AND EDX,0x1000
PUSH EDX
PUSH EAX
CALL 0x00419db0
ADD ESP,0x8
PUSH 0x4e
PUSH ESI
CALL 0x00414d90
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0040b959
MOV ECX,dword ptr [EAX + 0x20]
AND ECX,0x1000
PUSH ECX
PUSH EAX
CALL 0x00419db0
ADD ESP,0x8
PUSH 0x54
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [0x004b2944]
ADD ESP,0x8
PUSH EDX
PUSH EAX
CALL 0x00414420
MOV EAX,[0x00ec879c]
MOV ECX,dword ptr [0x00ec87a0]
ADD ESP,0x8
PUSH EAX
JMP 0x0040b9cb
PUSH 0x4e
PUSH ESI
CALL 0x00414d90
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0040b9a4
MOV ECX,dword ptr [EAX + 0x20]
AND ECX,0x1000
PUSH ECX
PUSH EAX
CALL 0x00419db0
ADD ESP,0x8
PUSH 0x54
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [0x004d6b38]
ADD ESP,0x8
PUSH EDX
PUSH EAX
CALL 0x00414420
MOV EAX,[0x00ec8770]
MOV ECX,dword ptr [0x00ec878c]
ADD ESP,0x8
PUSH EAX
PUSH ECX
PUSH 0x4b4e58
CALL 0x00421360
ADD ESP,0x4
LEA EDX,[ESP + 0x14]
PUSH EAX
PUSH EDX
CALL 0x0049eb80
ADD ESP,0x10
PUSH 0x58
PUSH ESI
CALL 0x00414d90
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0040bbdd
LEA ECX,[ESP + 0xc]
PUSH 0x0
PUSH ECX
PUSH EAX
CALL 0x00414b80
ADD ESP,0xc
POP EDI
POP ESI
POP EBX
ADD ESP,0x40
RET
PUSH 0x20
PUSH 0x9
PUSH 0x3
PUSH 0x40
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x20
PUSH 0x9
PUSH 0x2
PUSH 0x46
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x10
PUSH 0x9
PUSH 0x2
PUSH 0x49
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x1
PUSH 0x10
PUSH 0x9
PUSH 0x3
PUSH 0x43
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x20
PUSH 0x9
PUSH 0x3
PUSH 0x41
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x20
PUSH 0x9
PUSH 0x2
PUSH 0x47
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x10
PUSH 0x9
PUSH 0x2
PUSH 0x4a
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x10
PUSH 0x9
PUSH 0x3
PUSH 0x44
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x3
PUSH 0x20
PUSH 0x9
PUSH 0x3
PUSH 0x42
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x3
PUSH 0x20
PUSH 0x9
PUSH 0x2
PUSH 0x48
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x3
PUSH 0x10
PUSH 0x9
PUSH 0x2
PUSH 0x4b
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x3
PUSH 0x10
PUSH 0x9
PUSH 0x3
PUSH 0x45
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x0
PUSH 0xa
PUSH 0x0
PUSH 0x28
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x0
PUSH 0xa
PUSH 0x1
PUSH 0x2a
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x0
PUSH 0xa
PUSH 0x2
PUSH 0x2c
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x0
PUSH 0xa
PUSH 0x3
PUSH 0x2e
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x0
PUSH 0xa
PUSH 0x4
PUSH 0x30
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x0
PUSH 0xa
PUSH 0x5
PUSH 0x32
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x0
PUSH 0xa
PUSH 0x6
PUSH 0x34
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x0
PUSH 0xa
PUSH 0x7
PUSH 0x36
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x0
PUSH 0xa
PUSH 0x8
PUSH 0x38
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
PUSH 0x2
PUSH 0x0
PUSH 0xa
PUSH 0x9
PUSH 0x3a
PUSH ESI
PUSH 0x2
CALL 0x0040c670
ADD ESP,0x1c
POP EDI
POP ESI
POP EBX
ADD ESP,0x40
RET
