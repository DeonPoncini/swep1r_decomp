; FUN_004485d0
MOV ECX,dword ptr [ESP + 0x4]
PUSH EBX
PUSH ESI
PUSH EDI
MOV EAX,dword ptr [ECX]
LEA ESI,[ECX + 0x4]
MOV EBX,EAX
MOV EDX,EAX
AND EBX,0xff00
SHL EDX,0x10
OR EBX,EDX
MOV EDX,EAX
SHR EDX,0x10
AND EAX,0xff0000
OR EDX,EAX
SHL EBX,0x8
SHR EDX,0x8
OR EBX,EDX
MOV dword ptr [ECX],EBX
MOV dword ptr [0x00e6b168],0x0
MOV dword ptr [0x00e981e8],0x0
MOV EAX,dword ptr [ESI]
CMP EAX,-0x1
JZ 0x00448634
TEST EAX,EAX
JZ 0x00448629
PUSH EAX
CALL 0x004476b0
ADD ESP,0x4
MOV EAX,dword ptr [ESI + 0x4]
ADD ESI,0x4
CMP EAX,-0x1
JNZ 0x0044861c
MOV EAX,dword ptr [ESI + 0x4]
ADD ESI,0x4
MOV ECX,EAX
MOV EDX,EAX
AND ECX,0xff00
SHL EDX,0x10
OR ECX,EDX
MOV EDX,EAX
AND EDX,0xff0000
SHR EAX,0x10
OR EDX,EAX
SHL ECX,0x8
SHR EDX,0x8
OR ECX,EDX
CMP ECX,0x44617461
JNZ 0x004486cc
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [ESI + 0x4]
ADD ESI,0x4
MOV EAX,ECX
MOV EDX,ECX
AND EAX,0xff00
SHL EDX,0x10
OR EAX,EDX
MOV EDX,ECX
AND EDX,0xff0000
ADD ESI,0x4
SHR ECX,0x10
OR EDX,ECX
SHL EAX,0x8
SHR EDX,0x8
OR EAX,EDX
MOV dword ptr [ESI + -0x4],EAX
TEST EAX,EAX
JLE 0x004486cc
MOV ECX,EAX
MOV EAX,dword ptr [ESI]
ADD ESI,0x4
MOV EDX,EAX
MOV EDI,EAX
AND EDX,0xff00
SHL EDI,0x10
OR EDX,EDI
MOV EDI,EAX
AND EDI,0xff0000
SHR EAX,0x10
OR EDI,EAX
SHL EDX,0x8
SHR EDI,0x8
OR EDX,EDI
DEC ECX
MOV dword ptr [ESI + -0x4],EDX
JNZ 0x0044869d
MOV EAX,dword ptr [ESI]
MOV ECX,EAX
MOV EDX,EAX
AND ECX,0xff00
SHL EDX,0x10
OR ECX,EDX
MOV EDX,EAX
AND EDX,0xff0000
SHR EAX,0x10
OR EDX,EAX
SHL ECX,0x8
SHR EDX,0x8
OR ECX,EDX
CMP ECX,0x416e696d
JNZ 0x00448721
MOV dword ptr [ESI],ECX
MOV EAX,dword ptr [ESI + 0x4]
ADD ESI,0x4
TEST EAX,EAX
MOV EDI,ESI
JZ 0x0044871e
PUSH EAX
CALL 0x00448180
MOV EAX,dword ptr [EDI + 0x4]
ADD EDI,0x4
ADD ESP,0x4
ADD ESI,0x4
TEST EAX,EAX
JNZ 0x00448708
ADD ESI,0x4
MOV EAX,dword ptr [ESI]
MOV ECX,EAX
MOV EDX,EAX
AND ECX,0xff00
SHL EDX,0x10
OR ECX,EDX
MOV EDX,EAX
AND EDX,0xff0000
SHR EAX,0x10
OR EDX,EAX
SHL ECX,0x8
SHR EDX,0x8
OR ECX,EDX
CMP ECX,0x416c744e
JNZ 0x00448775
MOV dword ptr [ESI],ECX
ADD ESI,0x4
CMP EBX,0x4d416c74
JNZ 0x00448775
MOV EAX,dword ptr [ESI]
TEST EAX,EAX
JZ 0x00448775
PUSH EAX
CALL 0x004476b0
MOV EAX,dword ptr [ESI + 0x4]
ADD ESI,0x4
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x00448762
POP EDI
POP ESI
POP EBX
RET
