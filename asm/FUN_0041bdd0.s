; FUN_0041bdd0
MOV EAX,[0x004eb1dc]
TEST EAX,EAX
JZ 0x0041be77
PUSH EDI
PUSH ESI
CALL 0x0041e880
MOV ECX,0x100
XOR EAX,EAX
MOV EDI,0x4ea988
MOV dword ptr [0x004eb1c4],0x4
STOSD.REP ES:EDI
MOV EDI,0x4b6748
OR ECX,0xffffffff
SCASB.REPNE ES:EDI
NOT ECX
SUB EDI,ECX
MOV ESI,EDI
MOV EDX,ECX
MOV EDI,0x4ea988
OR ECX,0xffffffff
SCASB.REPNE ES:EDI
MOV ECX,EDX
DEC EDI
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EDX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ESI,0x1
PUSH ESI
CALL 0x00411730
MOV EAX,[0x004eb228]
MOV ECX,dword ptr [0x004eb224]
ADD ESP,0x4
PUSH 0x7
PUSH ESI
PUSH EAX
PUSH ECX
CALL 0x00411740
MOV EDX,dword ptr [0x004b2940]
ADD ESP,0x10
MOV dword ptr [0x004b2940],ESI
MOV dword ptr [0x004eb22c],ESI
MOV dword ptr [0x00ea0250],ESI
POP ESI
MOV dword ptr [0x004b2948],0x0
MOV dword ptr [0x004e9ecc],EDX
POP EDI
RET
