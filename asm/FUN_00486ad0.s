; FUN_00486ad0
PUSH EDI
PUSH 0x0
CALL dword ptr [0x004ac280]
PUSH 0x510254
PUSH 0x4af4a8
PUSH 0x1
PUSH 0x0
PUSH 0x4af4c8
CALL dword ptr [0x004ac284]
MOV ECX,0x460
XOR EAX,EAX
MOV EDI,0x510260
MOV [0x00513868],EAX
STOSD.REP ES:EDI
MOV [0x0051386c],EAX
MOV [0x00510258],EAX
MOV EAX,[0x00510254]
PUSH 0x0
PUSH 0x0
PUSH 0x487370
MOV EDI,dword ptr [EAX]
CALL 0x0048c7e0
MOV ECX,dword ptr [0x00510254]
PUSH EAX
PUSH ECX
CALL dword ptr [EDI + 0x8c]
XOR EDX,EDX
POP EDI
TEST EAX,EAX
SETL DL
MOV EAX,EDX
RET
