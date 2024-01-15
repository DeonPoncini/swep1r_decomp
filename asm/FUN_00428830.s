; FUN_00428830
PUSH ESI
XOR ECX,ECX
PUSH EDI
XOR EAX,EAX
MOV ESI,0x20
MOV EDX,0x3f800000
MOV EDI,dword ptr [0x004b91c4]
ADD EAX,0x7c
DEC ESI
MOV dword ptr [EDI + EAX*0x1 + -0x68],EDX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x64],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x60],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x5c],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x58],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x54],EDX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x50],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x4c],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x48],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x44],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x40],EDX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x3c],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x38],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x34],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x30],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x2c],EDX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x74],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV word ptr [EDI + EAX*0x1 + -0x78],CX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x10],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0xc],ECX
MOV EDI,dword ptr [0x004b91c4]
MOV dword ptr [EDI + EAX*0x1 + -0x8],ECX
JNZ 0x00428840
MOV ESI,dword ptr [0x00e9b9c0]
MOV EAX,[0x004b91c4]
AND ESI,0xfffffffe
PUSH 0x4
PUSH 0x1
MOV [0x0050c034],EAX
MOV dword ptr [0x0050c038],ECX
MOV dword ptr [0x00e9b9c0],ESI
MOV word ptr [0x00e9b9c4],CX
MOV word ptr [0x00e9b9c6],CX
MOV dword ptr [0x00e9b9e0],0x0
MOV dword ptr [0x00e9b9e4],0x41200000
MOV word ptr [0x00e9ba40],CX
MOV dword ptr [0x00e9ba44],ECX
MOV dword ptr [0x00e9b9e8],0x3f800000
MOV dword ptr [0x00e9b9ec],0x0
MOV dword ptr [0x00e9b9f0],0x0
MOV dword ptr [0x00e9b9f4],0x0
MOV dword ptr [0x00e9b9f8],0x0
MOV dword ptr [0x00e9b9fc],0x3f800000
MOV dword ptr [0x00e9ba00],0x0
MOV dword ptr [0x00e9ba04],0x0
MOV dword ptr [0x00e9ba08],0x0
MOV dword ptr [0x00e9ba0c],0x0
MOV dword ptr [0x00e9ba10],0x3f800000
MOV dword ptr [0x00e9ba14],0x0
MOV dword ptr [0x00e9ba18],0x0
MOV dword ptr [0x00e9ba1c],0x0
MOV dword ptr [0x00e9ba20],0x0
MOV dword ptr [0x00e9ba24],0x3f800000
MOV dword ptr [0x00e9ba28],0x0
MOV dword ptr [0x00e9ba2c],0x0
MOV dword ptr [0x00e9ba30],0x0
CALL 0x00428a40
ADD ESP,0x8
POP EDI
POP ESI
RET
