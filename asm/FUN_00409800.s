; FUN_00409800
SUB ESP,0x78
PUSH ESI
PUSH EDI
CALL 0x00489ab0
PUSH 0x1a
CALL 0x00408640
MOV AL,[0x00e229ac]
MOV CL,byte ptr [0x00e229aa]
MOV DL,byte ptr [0x00e229a8]
ADD ESP,0x4
PUSH 0x0
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00489cd0
ADD ESP,0x10
PUSH 0x1c
CALL 0x00408640
MOV ECX,dword ptr [0x00ec8e0c]
MOV EAX,[0x00ec8e10]
ADD ESP,0x4
MOV [0x00ec86c4],EAX
MOV dword ptr [0x00ec85e8],ECX
PUSH ECX
PUSH EAX
PUSH 0x0
PUSH 0x0
PUSH 0xec8da0
PUSH 0x0
CALL 0x00490a50
MOV ESI,dword ptr [ESP + 0x9c]
ADD ESP,0x18
MOV [0x00ec86e0],EAX
MOV EAX,dword ptr [ESI + 0x20]
PUSH EAX
CALL 0x00490a30
MOV ECX,dword ptr [ESI + 0x24]
ADD ESP,0x4
PUSH ECX
CALL 0x00490a40
ADD ESP,0x4
PUSH 0x1
CALL 0x00490a20
ADD ESP,0x4
PUSH 0x1d
CALL 0x00408640
ADD ESP,0x4
PUSH 0x3f800000
PUSH 0x41700000
PUSH 0x3da3d70a
PUSH 0x0
PUSH 0x42960000
CALL 0x0048fad0
MOV EDX,dword ptr [0x00ec86e0]
ADD ESP,0x14
MOV [0x00ec85ec],EAX
PUSH EDX
PUSH EAX
CALL 0x0048fc50
ADD ESP,0x8
PUSH 0x1e
CALL 0x00408640
MOV EAX,[0x00ec85ec]
ADD ESP,0x4
PUSH EAX
CALL 0x0048fc70
ADD ESP,0x4
MOV ECX,0xc
MOV ESI,0x4af880
MOV EDI,0xec8580
MOVSD.REP ES:EDI,ESI
PUSH 0xec8580
MOV dword ptr [0x00ec8550],0xc47a0000
MOV dword ptr [0x00ec8554],0xc4fa0000
MOV dword ptr [0x00ec8558],0x45fa0000
MOV dword ptr [0x00ec8730],0x0
MOV dword ptr [0x00ec8734],0x0
MOV dword ptr [0x00ec8738],0x0
CALL 0x00490060
ADD ESP,0x4
PUSH 0x20
CALL 0x00408640
ADD ESP,0x4
LEA ECX,[ESP + 0x30]
PUSH ECX
CALL 0x00489d90
ADD ESP,0x4
TEST EAX,EAX
JZ 0x00409967
XOR EAX,EAX
POP EDI
POP ESI
ADD ESP,0x78
RET
MOV EDX,dword ptr [ESP + 0x30]
MOV EAX,[0x00ec85ec]
PUSH EDX
PUSH EAX
CALL 0x0048fd10
MOV ECX,dword ptr [0x00ec85ec]
ADD ESP,0x8
PUSH 0x3f4ccccd
PUSH 0x3ecccccd
PUSH ECX
CALL 0x004903d0
ADD ESP,0xc
PUSH 0x22
CALL 0x00408640
MOV EDX,dword ptr [0x00ec86e0]
MOV EAX,[0x00ec85ec]
ADD ESP,0x4
PUSH EDX
PUSH EAX
CALL 0x0048fc50
MOV ECX,dword ptr [0x00ec85ec]
ADD ESP,0x8
PUSH ECX
CALL 0x004904f0
ADD ESP,0x4
PUSH 0x4d6b78
CALL 0x00490510
ADD ESP,0x4
PUSH 0x4d6ba8
CALL 0x00490510
ADD ESP,0x4
MOV dword ptr [0x004d6b7c],0x0
MOV dword ptr [0x004d6bac],0x0
MOV dword ptr [0x004d6b90],0x3f800000
PUSH 0x24
MOV dword ptr [0x004d6bc0],0x3f800000
MOV dword ptr [0x004d6b98],0x0
MOV dword ptr [0x004d6b94],0x0
MOV dword ptr [0x004d6bc8],0x0
MOV dword ptr [0x004d6bc4],0x0
MOV dword ptr [ESP + 0xc],0x0
MOV dword ptr [ESP + 0x18],0x0
MOV dword ptr [ESP + 0x10],0x42c80000
MOV dword ptr [ESP + 0x1c],0x42c80000
MOV dword ptr [ESP + 0x14],0xc1a00000
MOV dword ptr [ESP + 0x20],0xc1a00000
CALL 0x00408640
MOV EAX,[0x00ec85ec]
ADD ESP,0x4
LEA EDX,[ESP + 0x8]
PUSH EDX
PUSH 0x4d6b78
PUSH EAX
CALL 0x00490450
MOV EDX,dword ptr [0x00ec85ec]
ADD ESP,0xc
LEA ECX,[ESP + 0x14]
PUSH ECX
PUSH 0x4d6ba8
PUSH EDX
CALL 0x00490450
MOV ECX,dword ptr [0x00ec85ec]
ADD ESP,0xc
LEA EAX,[ESP + 0x20]
MOV dword ptr [ESP + 0x20],0x0
PUSH EAX
PUSH ECX
MOV dword ptr [ESP + 0x2c],0x0
MOV dword ptr [ESP + 0x30],0x3f000000
MOV dword ptr [ESP + 0x34],0x3f800000
CALL 0x004903a0
ADD ESP,0x8
PUSH 0x26
CALL 0x00408640
ADD ESP,0x4
MOV dword ptr [0x004b4318],0x1
POP EDI
POP ESI
ADD ESP,0x78
RET
