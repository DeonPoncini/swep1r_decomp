; FUN_004325b0
SUB ESP,0x8
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
CALL 0x0048dba0
MOV ESI,EAX
MOV EAX,dword ptr [ESP + 0x34]
MOV EDI,0x1
CMP EAX,EDI
JNZ 0x004325d9
MOV EAX,[0x00e996a4]
PUSH EAX
CALL 0x004320b0
ADD ESP,0x4
XOR EDX,EDX
MOV dword ptr [ESI],0x2e
MOV dword ptr [ESI + 0x4],EDI
MOV dword ptr [ESI + 0x8],0x4
MOV dword ptr [ESI + 0x38],EDX
MOV dword ptr [ESI + 0x3c],EDX
MOV EBX,dword ptr [0x00e996a4]
MOV EAX,dword ptr [ESI + 0x14]
MOV dword ptr [ESI + 0x1c],EBX
MOV dword ptr [ESI + 0x20],EDX
MOV dword ptr [ESI + 0x34],EDX
MOV EDX,dword ptr [0x00df7f2c]
MOV ECX,dword ptr [ESI + 0x10]
MOV dword ptr [ESP + 0x34],EAX
MOV EDX,dword ptr [EDX + 0x48]
MOV EAX,dword ptr [ESI + 0x18]
FLD dword ptr [EDX + 0x4]
CMP dword ptr [ESP + 0x38],EDI
JNZ 0x00432627
FSTP ST0
FLD dword ptr [0x004ac718]
FLD ST0
FLD ST1
MOVSX EDX,word ptr [ESP + 0x1c]
FLD ST2
FXCH ST2
FSTP dword ptr [ECX + 0x8]
MOVSX EDI,word ptr [ESP + 0x20]
FSTP dword ptr [ECX + 0x14]
FSTP dword ptr [ECX + 0x20]
MOVSX EBX,word ptr [ESP + 0x28]
FSTP dword ptr [ECX + 0x2c]
MOVSX EBP,word ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x1c],EDX
MOV dword ptr [ESP + 0x20],EDI
FILD dword ptr [ESP + 0x1c]
FILD dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x1c],EBX
MOV dword ptr [ESP + 0x20],EBP
FILD dword ptr [ESP + 0x1c]
FILD dword ptr [ESP + 0x20]
FLD ST3
FXCH ST3
FST dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x1c]
FXCH ST4
FSTP dword ptr [ECX]
FXCH ST2
FST dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x1c]
FXCH ST3
FSTP dword ptr [ECX + 0x4]
FXCH
FST dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x1c]
FXCH ST5
FSTP dword ptr [ECX + 0xc]
FXCH
FSTP dword ptr [ECX + 0x10]
FSTP dword ptr [ECX + 0x18]
FSTP dword ptr [ECX + 0x1c]
FXCH
FSTP dword ptr [ECX + 0x24]
FSTP dword ptr [ECX + 0x28]
FLD dword ptr [0x00e37530]
XOR ECX,ECX
FSTP dword ptr [EAX + 0x30]
MOV EDX,dword ptr [0x00e37530]
MOV dword ptr [ESP + 0x14],ECX
MOV dword ptr [EAX + 0x20],EDX
MOV EDX,dword ptr [0x00e37530]
MOV dword ptr [EAX + 0x10],EDX
MOV EDX,dword ptr [0x00e37530]
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [0x00e37534]
MOV dword ptr [EAX + 0x34],EDX
MOV EDX,dword ptr [0x00e37534]
MOV dword ptr [EAX + 0x24],EDX
MOV EDX,dword ptr [0x00e37534]
MOV dword ptr [EAX + 0x14],EDX
MOV EDX,dword ptr [0x00e37534]
MOV dword ptr [EAX + 0x4],EDX
MOV EDX,dword ptr [0x00e37538]
MOV dword ptr [EAX + 0x38],EDX
MOV EDX,dword ptr [0x00e37538]
MOV dword ptr [EAX + 0x28],EDX
MOV EDX,dword ptr [0x00e37538]
MOV dword ptr [EAX + 0x18],EDX
MOV EDX,dword ptr [0x00e37538]
MOV dword ptr [EAX + 0x8],EDX
MOV EDX,dword ptr [0x00e3753c]
MOV dword ptr [EAX + 0x3c],EDX
MOV EDX,dword ptr [0x00e3753c]
MOV dword ptr [EAX + 0x2c],EDX
MOV EDX,dword ptr [0x00e3753c]
MOV dword ptr [EAX + 0x1c],EDX
MOV EDX,dword ptr [0x00e3753c]
MOV dword ptr [EAX + 0xc],EDX
MOV EAX,dword ptr [ESI + 0x1c]
MOV EDX,dword ptr [EAX + 0x80]
MOV EAX,dword ptr [ESP + 0x34]
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [ESP + 0x10],EDX
PUSH 0x7
FILD qword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x18],ECX
FDIVR dword ptr [ESP + 0x30]
FSTP dword ptr [EAX]
MOV EDX,dword ptr [ESI + 0x1c]
MOV EDX,dword ptr [EDX + 0x80]
MOV dword ptr [ESP + 0x14],EDX
FILD qword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x18],ECX
FDIVR dword ptr [ESP + 0x30]
FSTP dword ptr [EAX + 0x8]
MOV EDX,dword ptr [ESI + 0x1c]
MOV EDX,dword ptr [EDX + 0x84]
MOV dword ptr [EAX + 0x10],ECX
MOV dword ptr [ESP + 0x14],EDX
FILD qword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x18],ECX
FDIVR dword ptr [ESP + 0x34]
FSTP dword ptr [EAX + 0xc]
MOV EDX,dword ptr [ESI + 0x1c]
MOV EDX,dword ptr [EDX + 0x84]
MOV dword ptr [EAX + 0x18],ECX
MOV dword ptr [ESP + 0x14],EDX
MOV dword ptr [EAX + 0x1c],ECX
FILD qword ptr [ESP + 0x14]
FDIVR dword ptr [ESP + 0x34]
FSTP dword ptr [EAX + 0x14]
MOV EAX,dword ptr [ESI + 0x8]
PUSH EAX
CALL 0x0048de10
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
