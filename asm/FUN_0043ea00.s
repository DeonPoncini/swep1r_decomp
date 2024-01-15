; FUN_0043ea00
MOV EAX,dword ptr [ESP + 0x4]
PUSH EBX
XOR EBX,EBX
PUSH EDI
SUB EAX,EBX
JZ 0x0043eab4
DEC EAX
JNZ 0x0043eb4a
MOV EAX,dword ptr [ESP + 0x10]
MOV CL,0x1
LEA EDX,[EAX + EAX*0x4]
SHL EDX,0x4
MOV byte ptr [EDX + 0xe364d4],BL
MOV byte ptr [EDX + 0xe364d6],AL
MOV dword ptr [EDX + 0xe364ec],0x190
MOV byte ptr [EDX + 0xe364f4],CL
MOV byte ptr [EDX + 0xe364d7],BL
MOV dword ptr [EDX + 0xe364e8],0x22e01
MOV dword ptr [EDX + 0xe364f0],EBX
MOV byte ptr [EDX + 0xe364d5],CL
XOR EAX,EAX
MOV byte ptr [EDX + 0xe364d8],BL
MOV dword ptr [EDX + 0xe364de],EAX
MOV dword ptr [EDX + 0xe364e2],EAX
MOV byte ptr [EDX + 0xe364d9],CL
MOV byte ptr [EDX + 0xe364da],CL
MOV byte ptr [EDX + 0xe364db],CL
MOV byte ptr [EDX + 0xe364dc],BL
MOV byte ptr [EAX + EDX*0x1 + 0xe364f5],BL
MOV byte ptr [EAX + EDX*0x1 + 0xe364fc],0xff
INC EAX
CMP EAX,0x7
JL 0x0043ea87
LEA EDI,[EDX + 0xe364b4]
MOV ECX,0x8
XOR EAX,EAX
STOSD.REP ES:EDI
MOV byte ptr [EDX + 0xe36503],BL
POP EDI
POP EBX
RET
MOV EDX,dword ptr [ESP + 0x10]
MOV CL,0x1
LEA EAX,[EDX + EDX*0x4]
SHL EAX,0x4
MOV byte ptr [EAX + 0xe35a80],BL
MOV dword ptr [EAX + 0xe35a98],0x190
MOV byte ptr [EAX + 0xe35aa0],CL
MOV byte ptr [EAX + 0xe35a83],BL
MOV dword ptr [EAX + 0xe35a94],0x22e01
MOV dword ptr [EAX + 0xe35a9c],EBX
MOV byte ptr [EAX + 0xe35a81],CL
MOV byte ptr [EAX + 0xe35a84],BL
MOV byte ptr [EAX + 0xe35a82],DL
XOR EDX,EDX
MOV dword ptr [EAX + 0xe35a8a],EDX
MOV dword ptr [EAX + 0xe35a8e],EDX
MOV byte ptr [EAX + 0xe35a85],CL
MOV byte ptr [EAX + 0xe35a86],CL
MOV byte ptr [EAX + 0xe35a87],CL
MOV byte ptr [EAX + 0xe35a88],BL
XOR ECX,ECX
MOV byte ptr [ECX + EAX*0x1 + 0xe35aa1],BL
MOV byte ptr [ECX + EAX*0x1 + 0xe35aa8],0xff
INC ECX
CMP ECX,0x7
JL 0x0043eb26
LEA EDI,[EAX + 0xe35a60]
MOV ECX,0x8
XOR EAX,EAX
STOSD.REP ES:EDI
POP EDI
POP EBX
RET
