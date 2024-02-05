.text
.globl f
f:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
sw a0, -20(s0)
sw a1, -24(s0)
lw t1, -20(s0)
lw t2, -24(s0)
div t0, t1, t2
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
