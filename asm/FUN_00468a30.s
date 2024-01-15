; FUN_00468a30
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [EAX + 0x88]
CMP ECX,-0x1
JNZ 0x00468a66
MOV EDX,dword ptr [EAX + 0x8]
CMP EDX,0x1
JZ 0x00468cc5
CMP EDX,0x2
JZ 0x00468cc5
CMP EDX,0x6
JZ 0x00468cc5
CMP EDX,0x3
JZ 0x00468cc5
MOV EDX,dword ptr [EAX + 0x8]
DEC EDX
CMP EDX,0xb
JA 0x00468cb1
JMP dword ptr [EDX*0x4 + 0x468cc8]
MOVSX ECX,word ptr [ECX*0x4 + 0x4c25a8]
MOV dword ptr [ESP + 0x4],ECX
MOV EDX,dword ptr [ESP + 0x8]
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ad660]
FSTP dword ptr [EDX]
MOV EAX,dword ptr [EAX + 0x88]
MOV EDX,dword ptr [ESP + 0xc]
MOVSX ECX,word ptr [EAX*0x4 + 0x4c25aa]
MOV dword ptr [ESP + 0x8],ECX
FILD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ad660]
FSTP dword ptr [EDX]
RET
MOVSX ECX,word ptr [ECX*0x4 + 0x4c2620]
MOV dword ptr [ESP + 0x4],ECX
MOV EDX,dword ptr [ESP + 0x8]
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
MOV EAX,dword ptr [EAX + 0x88]
MOV EDX,dword ptr [ESP + 0xc]
MOVSX ECX,word ptr [EAX*0x4 + 0x4c2622]
MOV dword ptr [ESP + 0x8],ECX
FILD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
RET
MOVSX ECX,word ptr [ECX*0x4 + 0x4c2658]
MOV dword ptr [ESP + 0x4],ECX
MOV EDX,dword ptr [ESP + 0x8]
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
MOV EAX,dword ptr [EAX + 0x88]
MOV EDX,dword ptr [ESP + 0xc]
MOVSX ECX,word ptr [EAX*0x4 + 0x4c265a]
MOV dword ptr [ESP + 0x8],ECX
FILD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
RET
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0xc]
MOV dword ptr [EAX],0x3d08850a
MOV dword ptr [ECX],0x41655532
RET
MOV EDX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0xc]
MOV dword ptr [EDX],0x3d08850a
MOV dword ptr [EAX],0x40866666
RET
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0xc]
MOV dword ptr [ECX],0x3d886595
MOV dword ptr [EDX],0x40a1f8a1
RET
MOVSX ECX,word ptr [ECX*0x4 + 0x4c2698]
MOV dword ptr [ESP + 0x4],ECX
MOV EDX,dword ptr [ESP + 0x8]
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
MOV EAX,dword ptr [EAX + 0x88]
MOV EDX,dword ptr [ESP + 0xc]
MOVSX ECX,word ptr [EAX*0x4 + 0x4c269a]
MOV dword ptr [ESP + 0x8],ECX
FILD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
RET
MOVSX ECX,word ptr [ECX*0x4 + 0x4c26a8]
MOV dword ptr [ESP + 0x4],ECX
MOV EDX,dword ptr [ESP + 0x8]
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
MOV EAX,dword ptr [EAX + 0x88]
MOV EDX,dword ptr [ESP + 0xc]
MOVSX ECX,word ptr [EAX*0x4 + 0x4c26aa]
MOV dword ptr [ESP + 0x8],ECX
FILD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
RET
MOVSX ECX,word ptr [ECX*0x4 + 0x4c26b8]
MOV dword ptr [ESP + 0x4],ECX
MOV EDX,dword ptr [ESP + 0x8]
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
MOV EAX,dword ptr [EAX + 0x88]
MOV EDX,dword ptr [ESP + 0xc]
MOVSX ECX,word ptr [EAX*0x4 + 0x4c26ba]
MOV dword ptr [ESP + 0x8],ECX
FILD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
RET
MOVSX ECX,word ptr [ECX*0x4 + 0x4c26d0]
MOV dword ptr [ESP + 0x4],ECX
MOV EDX,dword ptr [ESP + 0x8]
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
MOV EAX,dword ptr [EAX + 0x88]
MOV EDX,dword ptr [ESP + 0xc]
MOVSX ECX,word ptr [EAX*0x4 + 0x4c26d2]
MOV dword ptr [ESP + 0x8],ECX
FILD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
RET
MOVSX ECX,word ptr [ECX*0x4 + 0x4c26e8]
MOV dword ptr [ESP + 0x4],ECX
MOV EDX,dword ptr [ESP + 0x8]
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
MOV EAX,dword ptr [EAX + 0x88]
MOV EDX,dword ptr [ESP + 0xc]
MOVSX ECX,word ptr [EAX*0x4 + 0x4c26ea]
MOV dword ptr [ESP + 0x8],ECX
FILD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ad664]
FSTP dword ptr [EDX]
RET
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0xc]
MOV dword ptr [EAX],0x0
MOV dword ptr [ECX],0x0
RET
