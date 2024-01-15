; __ftol
PUSH EBP
MOV EBP,ESP
ADD ESP,-0xc
FSTCW word ptr [EBP + -0x2]
WAIT
MOV AX,word ptr [EBP + -0x2]
OR AH,0xc
MOV word ptr [EBP + -0x4],AX
FLDCW word ptr [EBP + -0x4]
FISTP qword ptr [EBP + -0xc]
FLDCW word ptr [EBP + -0x2]
MOV EAX,dword ptr [EBP + -0xc]
MOV EDX,dword ptr [EBP + -0x8]
LEAVE
RET
