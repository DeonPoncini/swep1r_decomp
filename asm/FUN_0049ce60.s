; FUN_0049ce60
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [0x00dfaa38]
MOV EDX,dword ptr [ESP + 0x4]
ADD EAX,ECX
PUSH 0x6
MOV ECX,dword ptr [0x00dfaa28]
PUSH EAX
MOV EAX,[0x00dfaa34]
ADD EDX,EAX
PUSH EDX
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH ECX
CALL dword ptr [0x004ac250]
RET
