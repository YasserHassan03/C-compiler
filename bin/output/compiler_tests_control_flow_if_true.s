.text
.globl f
f:
addi sp,sp,-16
sw s0,12(sp)
addi s0,sp,16
li a1, 1
beq a1, zero, skip_1
li t0, 11
mv a0, t0
j return_0
skip_1:
li t0, 10
mv a0, t0
j return_0
return_0:
lw s0,12(sp)
addi sp,sp,16
jr ra
