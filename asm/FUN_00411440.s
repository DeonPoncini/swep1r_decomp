; FUN_00411440
MOV ECX,dword ptr [ESP + 0x4]
TEST ECX,ECX
JZ 0x0041147e
MOV EAX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ECX + 0x28]
TEST EAX,EAX
JZ 0x0041145e
SUB EDX,dword ptr [ECX + 0x30]
ADD EDX,0x1df
SAR EDX,0x1
MOV EAX,dword ptr [ESP + 0x8]
TEST EAX,EAX
MOV EAX,dword ptr [ECX + 0x24]
JZ 0x00411473
SUB EAX,dword ptr [ECX + 0x2c]
ADD EAX,0x27f
SAR EAX,0x1
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x00414b60
ADD ESP,0xc
RET
