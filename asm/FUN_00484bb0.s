; FUN_00484bb0
MOV EAX,[0x0050d548]
TEST EAX,EAX
JNZ 0x00484bba
RET
MOV ECX,dword ptr [EAX]
LEA EDX,[ESP + 0x4]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x8]
PUSH EDX
PUSH EAX
CALL dword ptr [ECX + 0x48]
XOR ECX,ECX
TEST EAX,EAX
MOV EAX,dword ptr [ESP + 0x4]
SETL CL
DEC ECX
AND EAX,ECX
RET