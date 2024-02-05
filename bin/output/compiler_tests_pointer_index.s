.text
.globl f
f:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
sw a0, -20(s0)
li t0, 0
li t1, 1
