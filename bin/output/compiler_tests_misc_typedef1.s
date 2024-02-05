.text
.globl g
g:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
li t0, 13
mv t1, t0
sw t1, -20(s0)
li t0, 13
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
