; FUN_0041c130
PUSH ESI
PUSH EDI
CALL 0x0041e880
MOV EDI,dword ptr [ESP + 0xc]
PUSH EDI
CALL 0x0041e800
ADD ESP,0x4
PUSH 0x186b4
PUSH 0x0
CALL 0x00414d90
ADD ESP,0x8
MOV ESI,EAX
PUSH 0x0
PUSH EDI
PUSH ESI
CALL 0x00417fe0
ADD ESP,0xc
PUSH ESI
CALL 0x004137d0
ADD ESP,0x4
CMP EAX,0x6
JBE 0x0041c181
ADD EAX,-0x6
PUSH ESI
MOV dword ptr [ESI + 0x504],EAX
CALL 0x00417ca0
ADD ESP,0x4
POP EDI
POP ESI
RET