; FUN_00415400
PUSH EBX
PUSH ESI
PUSH EDI
CALL 0x004180c0
CALL 0x004502f0
MOV EAX,[0x004b5d74]
TEST EAX,EAX
JZ 0x0041562f
PUSH EAX
CALL 0x00414e80
ADD ESP,0x4
TEST EAX,EAX
JZ 0x0041562f
MOV EAX,[0x004b5d74]
PUSH EAX
CALL 0x00415020
ADD ESP,0x4
CALL 0x004184d0
MOV EAX,[0x004d87a8]
TEST EAX,EAX
JZ 0x00415455
MOV dword ptr [0x004d8be8],0x1
POP EDI
POP ESI
POP EBX
RET
MOV EAX,[0x004d8be8]
TEST EAX,EAX
JZ 0x00415479
MOV ECX,dword ptr [0x004d8798]
PUSH 0x1
PUSH ECX
CALL 0x00414f10
ADD ESP,0x8
MOV dword ptr [0x004d8be8],0x0
CALL 0x00408200
TEST EAX,EAX
JZ 0x0041562a
CALL 0x004083d0
MOV AL,[0x004d8bd0]
TEST AL,0x8
JZ 0x0041549f
AND AL,0xf7
MOV [0x004d8bd0],AL
POP EDI
POP ESI
POP EBX
RET
MOV EBX,dword ptr [0x00ec8754]
MOV EDI,dword ptr [0x00ec874c]
MOV EDX,dword ptr [0x004b5d74]
PUSH EBX
PUSH EDI
PUSH EDX
CALL 0x004150e0
MOV ESI,EAX
ADD ESP,0xc
TEST ESI,ESI
JZ 0x004154ce
MOV EAX,dword ptr [ESI + 0x20]
TEST AH,0x1
JNZ 0x0041562f
CALL 0x00414fe0
CMP ESI,EAX
JZ 0x004154f2
PUSH ESI
CALL 0x00414eb0
MOV EAX,[0x004d87c8]
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x004154f2
PUSH ESI
CALL 0x00414f70
ADD ESP,0x4
CALL 0x00414ff0
TEST EAX,EAX
JZ 0x004154fd
MOV ESI,EAX
TEST dword ptr [0x00ec8740],0x80000000
JZ 0x0041551b
CALL 0x00412630
PUSH EBX
PUSH EDI
PUSH 0x6
PUSH ESI
CALL 0x004151a0
ADD ESP,0x10
MOV EAX,[0x00ec8740]
TEST EAX,0x10000000
JZ 0x00415614
TEST AL,0x2
JZ 0x00415549
MOV EAX,[0x00ec8744]
PUSH EBX
NOT EAX
AND EAX,0x2
PUSH EDI
OR AL,0x4
SHR EAX,0x1
PUSH EAX
PUSH ESI
CALL 0x004151a0
ADD ESP,0x10
TEST byte ptr [0x00ec8740],0x4
JZ 0x0041556f
MOV ECX,dword ptr [0x00ec8744]
PUSH EBX
NOT ECX
AND ECX,0x4
PUSH EDI
OR ECX,0x10
SHR ECX,0x2
PUSH ECX
PUSH ESI
CALL 0x004151a0
ADD ESP,0x10
MOV EAX,[0x004d87c8]
TEST EAX,EAX
JNZ 0x004155f0
MOV EDI,dword ptr [0x00ec8740]
MOV EAX,[0x004d6b40]
AND EDI,0xe0000000
TEST EAX,EAX
JZ 0x004155a0
PUSH 0x0
PUSH EDI
PUSH 0x12
CALL 0x00411810
PUSH EAX
CALL 0x004151a0
ADD ESP,0x10
MOV EAX,[0x004d6b44]
TEST EAX,EAX
JZ 0x004155f0
TEST byte ptr [0x004d8bd0],0x1
JNZ 0x004155e9
MOV ECX,dword ptr [0x0050c454]
MOV EAX,dword ptr [ECX + 0x8]
CMP EAX,0x9
JNZ 0x004155c6
CMP dword ptr [ECX + 0x10],-0x1
JZ 0x004155cb
CMP EAX,0x1
JNZ 0x004155f0
MOV EAX,[0x004d87b4]
TEST EAX,EAX
JNZ 0x004155d9
CALL 0x00411810
PUSH 0x0
PUSH EDI
PUSH 0x13
PUSH EAX
CALL 0x004151a0
ADD ESP,0x10
JMP 0x004155f0
AND byte ptr [0x004d8bd0],0xfe
MOV EAX,[0x004d6b40]
TEST EAX,EAX
JZ 0x00415614
TEST ESI,ESI
JZ 0x00415614
TEST byte ptr [ESI + 0x20],0x8
JNZ 0x00415614
MOV EDX,dword ptr [ESI + 0x1c]
PUSH EDX
PUSH 0x1
PUSH 0x49
PUSH ESI
CALL 0x004151a0
ADD ESP,0x10
TEST dword ptr [0x00ec8740],0x20000000
JZ 0x0041562a
CALL 0x00412630
CALL 0x00416bd0
CALL 0x0041b690
POP EDI
POP ESI
POP EBX
RET
