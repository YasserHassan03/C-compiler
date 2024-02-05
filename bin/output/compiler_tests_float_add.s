.text
.globl f
f:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
fsw fa0, -20(s0)
fsw fa1, -24(s0)
flw ft1, -20(s0)
flw ft2, -24(s0)
fadd.s ft0, ft1, ft2
fmv.s fa0, ft0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
