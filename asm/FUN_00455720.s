; FUN_00455720
SUB ESP,0x24
LEA EAX,[ESP + 0xc]
PUSH 0x437f0000
PUSH 0x437f0000
PUSH 0x437f0000
PUSH EAX
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESP]
PUSH 0x437f0000
PUSH 0x437f0000
PUSH 0x437f0000
PUSH ECX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EDX,[ESP + 0x18]
PUSH 0x0
PUSH 0x42f00000
PUSH 0x0
PUSH EDX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EAX,[ESP + 0x18]
LEA ECX,[ESP]
LEA EDX,[ESP + 0xc]
PUSH EAX
PUSH ECX
PUSH EDX
PUSH 0x0
CALL 0x00483840
ADD ESP,0x10
LEA EAX,[ESP + 0xc]
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH EAX
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESP]
PUSH 0x43000000
PUSH 0x43000000
PUSH 0x43000000
PUSH ECX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EDX,[ESP + 0x18]
LEA EAX,[ESP]
LEA ECX,[ESP + 0xc]
PUSH EDX
PUSH EAX
PUSH ECX
PUSH 0x1
CALL 0x00483840
ADD ESP,0x10
ADD ESP,0x24
RET
