.text
.globl f
f:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
sw a0, -20(s0)
sw a1, -24(s0)
lw t1, -20(s0)
beq t1, zero, logicalLabel_1
lw t2, -24(s0)
beq t2, zero, logicalLabel_1
li t0, 1
j logicalLabel_2
logicalLabel_1:
li t0, 0
logicalLabel_2:
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
