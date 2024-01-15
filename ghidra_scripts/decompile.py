# Run this inside Ghidra Script Manager with the swep1r binary loaded

# This will take the binary and decompile it providing the full assembly
# listing, and the decompiled C code

# Assembly listings can be used for comparison and substitution in a full
# build

import os

# access the ghidra decompiler
decomp = ghidra.app.decompiler.DecompInterface()
decomp.openProgram(currentProgram)

# folder paths
script_path=os.path.dirname(os.path.realpath(__file__))
asm_root=script_path + "/../asm/"
c_root=script_path + "/../c/"

# prototype file
header_fname = c_root + "prototype.h"
header_file = open(header_fname, "w")

# for each function, create an assembly file and write it out
functions = list(currentProgram.functionManager.getFunctions(True))
for function in functions:
    fname = asm_root + function.getName() + '.s'
    f = open(fname, "w")
    f.write('; ' + function.getName() + '\n')
    body = function.getBody()
    for address in body.getAddresses(True):
        inst = currentProgram.getListing().getInstructionAt(address)
        if inst != None:
            f.write(inst.toString() + '\n')
    f.close()

    # write out the corresponding C function
    dr = decomp.decompileFunction(function, 60, ghidra.util.task.TaskMonitor.DUMMY)
    df = dr.getDecompiledFunction()
    fname_c = c_root + function.getName() + '.c'
    f_c = open(fname_c, "w")
    f_c.write("#include \"prototype.h\"\n\n")
    header_file.write(df.getSignature() + '\n')
    f_c.write(df.getC())
    f_c.close()

header_file.close()
