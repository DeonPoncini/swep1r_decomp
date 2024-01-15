; FUN_00469010
FLD dword ptr [0x0050cad8]
FADD dword ptr [0x00e22a50]
FST dword ptr [0x0050cad8]
FCOMP dword ptr [0x004ad678]
FNSTSW AX
TEST AH,0x41
JNZ 0x00469041
FLD dword ptr [0x0050cad8]
FSUB dword ptr [0x004ad678]
FSTP dword ptr [0x0050cad8]
MOV EAX,[0x0050cad8]
PUSH 0x4048887b
PUSH EAX
CALL 0x0045a420
FMUL dword ptr [0x004ad67c]
ADD ESP,0x8
FSUB qword ptr [0x004ad680]
FSTP dword ptr [0x004c7074]
RET
