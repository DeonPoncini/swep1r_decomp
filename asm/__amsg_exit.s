; __amsg_exit
CMP dword ptr [0x00dfaac8],0x1
JNZ 0x004a0c1e
CALL 0x004a5ab0
MOV EAX,dword ptr [ESP + 0x4]
PUSH EAX
CALL 0x004a5af0
ADD ESP,0x4
PUSH 0xff
CALL dword ptr [0x004d1fb0]
