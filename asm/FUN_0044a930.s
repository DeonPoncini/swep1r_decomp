; FUN_0044a930
MOV EAX,dword ptr [ESP + 0x4]
SUB ESP,0x8
PUSH EAX
CALL 0x00422a90
MOV ECX,EAX
ADD ESP,0x4
TEST ECX,ECX
JNZ 0x0044a950
FLD dword ptr [0x004acbf8]
ADD ESP,0x8
RET
MOV EAX,0x10624dd3
MOV dword ptr [ESP + 0x4],0x0
MUL dword ptr [ECX + 0x38]
SHR EDX,0x6
MOV dword ptr [ESP],EDX
FILD qword ptr [ESP]
ADD ESP,0x8
RET