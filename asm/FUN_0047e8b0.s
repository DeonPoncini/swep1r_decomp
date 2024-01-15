; FUN_0047e8b0
PUSH ECX
MOV ECX,dword ptr [ESP + 0xc]
MOV EAX,0x66666667
IMUL ECX
MOV ECX,dword ptr [ESP + 0x8]
PUSH EBX
SAR EDX,0x2
PUSH EBP
MOV EAX,EDX
PUSH ESI
MOV ESI,dword ptr [ECX]
SHR EAX,0x1f
ADD EDX,EAX
MOV EAX,dword ptr [ESI + 0x4]
CMP EDX,EAX
PUSH EDI
MOV dword ptr [ESP + 0x10],EDX
JL 0x0047e9a3
XOR EDI,EDI
TEST EAX,EAX
JLE 0x0047ea0f
XOR EAX,EAX
MOV EDX,EDI
MOV EBP,dword ptr [ESI + 0xc]
SHL EDX,0x3
SUB EDX,EDI
LEA EDX,[EDX + EDX*0x2]
SHL EDX,0x1
LEA EBX,[EAX + EDX*0x1]
MOVSX EBX,word ptr [EBP + EBX*0x2 + 0x42]
CMP EBX,dword ptr [ESP + 0x10]
JNZ 0x0047e987
FILD dword ptr [ESP + 0x1c]
FILD dword ptr [ESP + 0x10]
MOV dword ptr [ECX + 0x10],EDI
MOV EDI,EAX
AND EDI,0x1
MOV dword ptr [ECX + 0x2c],EAX
FMUL dword ptr [0x004adf38]
ADD EDI,EDX
FSUBP
FMUL dword ptr [0x004adf3c]
FSTP dword ptr [ECX + 0x8]
MOV EDX,dword ptr [ESI + 0xc]
MOVSX EDI,word ptr [EDX + EDI*0x2 + 0x4]
MOV dword ptr [ECX + 0x14],EDI
CMP word ptr [ESI],0x1
JZ 0x0047e980
LEA EDX,[EDI*0x8 + 0x0]
MOV EBX,EAX
SUB EDX,EDI
MOV EDI,dword ptr [ESI + 0xc]
SAR EBX,0x1
AND EBX,0x1
LEA EDX,[EDX + EDX*0x2]
SAR EAX,0x2
LEA EDX,[EBX + EDX*0x2]
AND EAX,0x1
MOVSX EDI,word ptr [EDI + EDX*0x2 + 0x4]
MOV dword ptr [ECX + 0x18],EDI
LEA EDX,[EDI*0x8 + 0x0]
SUB EDX,EDI
LEA EDX,[EDX + EDX*0x2]
LEA EAX,[EAX + EDX*0x2]
MOV EDX,dword ptr [ESI + 0xc]
MOVSX EAX,word ptr [EDX + EAX*0x2 + 0x4]
MOV dword ptr [ECX + 0x1c],EAX
MOV EAX,0x1869f
MOV EDI,EAX
INC EAX
CMP EAX,0x8
JL 0x0047e8eb
MOV EAX,dword ptr [ESI + 0x4]
INC EDI
CMP EDI,EAX
JL 0x0047e8e9
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
MOV EAX,EDX
MOV dword ptr [ECX + 0x10],EDX
SHL EAX,0x3
SUB EAX,EDX
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [ESI + 0xc]
MOVSX EDX,word ptr [EAX + EDX*0x4 + 0x4]
MOV dword ptr [ECX + 0x14],EDX
CMP word ptr [ESI],0x1
JZ 0x0047e9ef
LEA EAX,[EDX*0x8 + 0x0]
SUB EAX,EDX
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [ESI + 0xc]
MOVSX EDX,word ptr [EAX + EDX*0x4 + 0x4]
MOV dword ptr [ECX + 0x18],EDX
LEA EAX,[EDX*0x8 + 0x0]
SUB EAX,EDX
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [ESI + 0xc]
MOVSX EDX,word ptr [EAX + EDX*0x4 + 0x4]
MOV dword ptr [ECX + 0x1c],EDX
FILD dword ptr [ESP + 0x1c]
FILD dword ptr [ESP + 0x10]
MOV dword ptr [ECX + 0x2c],0x0
FMUL dword ptr [0x004adf38]
FSUBP
FMUL dword ptr [0x004adf3c]
FSTP dword ptr [ECX + 0x8]
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
