; FUN_0041f940
SUB ESP,0x10
PUSH ESI
CALL 0x0041c260
PUSH 0x41fc70
LEA EAX,[ESP + 0x8]
PUSH 0x186b8
PUSH EAX
PUSH 0x0
MOV dword ptr [ESP + 0x14],0x82
MOV dword ptr [ESP + 0x18],0x73
MOV dword ptr [ESP + 0x1c],0x26b
MOV dword ptr [ESP + 0x20],0x1cb
CALL 0x00413130
MOV ESI,EAX
ADD ESP,0x10
TEST ESI,ESI
JNZ 0x0041f98d
POP ESI
ADD ESP,0x10
RET
PUSH 0x0
PUSH 0x0
LEA ECX,[ESP + 0xc]
PUSH 0x0
PUSH ECX
PUSH 0x186b3
PUSH ESI
MOV dword ptr [ESP + 0x1c],0x78
MOV dword ptr [ESP + 0x20],0x73
MOV dword ptr [ESP + 0x24],0x141
MOV dword ptr [ESP + 0x28],0x11c
CALL 0x00413520
ADD ESP,0x18
PUSH 0x0
PUSH 0x0
PUSH 0x7d
PUSH 0x138
PUSH 0x4b6b5c
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x6
PUSH 0x0
PUSH ESI
CALL 0x004131c0
ADD ESP,0x20
PUSH 0x0
PUSH 0x0
PUSH 0x82
PUSH 0x172
PUSH 0x4d55cc
PUSH 0x0
PUSH 0x186b9
PUSH ESI
CALL 0x004131c0
ADD ESP,0x20
PUSH 0x0
PUSH 0x0
PUSH 0x96
PUSH 0x138
PUSH 0x4b6b40
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x6
PUSH 0x0
PUSH ESI
CALL 0x004131c0
ADD ESP,0x20
PUSH 0x0
PUSH 0x0
PUSH 0x9b
PUSH 0x172
PUSH 0x4d55cc
PUSH 0x0
PUSH 0x186ba
PUSH ESI
CALL 0x004131c0
ADD ESP,0x20
PUSH 0x0
PUSH 0x0
PUSH 0xb9
PUSH 0x138
PUSH 0x4b6b24
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x6
PUSH 0x0
PUSH ESI
CALL 0x004131c0
ADD ESP,0x20
PUSH 0x0
PUSH 0x1000000
PUSH 0xc8
PUSH 0xaf
PUSH 0x172
PUSH 0x8b
PUSH ESI
CALL 0x00413a90
ADD ESP,0x1c
MOV EDX,dword ptr [0x00ea02b8]
PUSH EDX
PUSH EAX
CALL 0x00413b30
ADD ESP,0x8
PUSH 0x0
PUSH 0x40004
PUSH 0x0
PUSH 0x80000
PUSH 0xdc
PUSH 0x32
PUSH 0x14a
PUSH 0x0
PUSH 0x6
PUSH 0x30d54
PUSH ESI
CALL 0x00413fc0
ADD ESP,0x2c
LEA EAX,[ESP + 0x4]
MOV dword ptr [ESP + 0x4],0x8c
MOV dword ptr [ESP + 0x8],0x131
PUSH 0x0
PUSH 0x100000
PUSH 0x0
PUSH EAX
PUSH 0x186b4
PUSH ESI
MOV dword ptr [ESP + 0x24],0x257
MOV dword ptr [ESP + 0x28],0x1a8
CALL 0x00413520
ADD ESP,0x18
PUSH 0x0
PUSH 0x100000
PUSH 0x19
PUSH 0x8c
PUSH 0x18b
PUSH 0x0
PUSH 0x4b6b08
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x6
PUSH 0x186b6
PUSH ESI
CALL 0x004132a0
ADD ESP,0x28
PUSH 0x0
PUSH 0x100000
PUSH 0x19
PUSH 0x8c
PUSH 0x1ae
PUSH 0x0
PUSH 0x4b6aec
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x6
PUSH 0x186b5
PUSH ESI
CALL 0x004132a0
ADD ESP,0x28
LEA ECX,[ESP + 0x4]
MOV dword ptr [ESP + 0x4],0x8c
MOV dword ptr [ESP + 0x8],0x1ae
PUSH 0x0
PUSH 0x10000
PUSH 0x0
PUSH ECX
PUSH 0x186bb
PUSH ESI
MOV dword ptr [ESP + 0x24],0x257
MOV dword ptr [ESP + 0x28],0x1d5
CALL 0x00413430
ADD ESP,0x18
PUSH 0x32
PUSH EAX
CALL 0x00413500
ADD ESP,0x8
PUSH 0x0
PUSH 0x100000
PUSH 0x19
PUSH 0x8c
PUSH 0x73
PUSH 0x0
PUSH 0x4b6acc
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x6
PUSH 0x7e
PUSH ESI
CALL 0x004132a0
ADD ESP,0x28
PUSH 0x0
PUSH 0x100000
PUSH 0x19
PUSH 0x8c
PUSH 0x91
PUSH 0x0
PUSH 0x4b6ab0
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x6
PUSH 0x7d
PUSH ESI
CALL 0x004132a0
ADD ESP,0x28
PUSH 0x0
PUSH 0x100000
PUSH 0x19
PUSH 0x8c
PUSH 0xaf
PUSH 0x0
PUSH 0x4b6a94
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x6
PUSH 0x80
PUSH ESI
CALL 0x004132a0
ADD ESP,0x28
MOV EAX,0x1
POP ESI
ADD ESP,0x10
RET
