.text
.globl f
f:
addi sp,sp,-64
sw s0,60(sp)
addi s0,sp,64
li t0, 13
mv t1, t0
sw t1, -20(s0)
lw t0, -20(s0)
mv a0, t0
j return_0
return_0:
lw s0,60(sp)
addi sp,sp,64
jr ra
