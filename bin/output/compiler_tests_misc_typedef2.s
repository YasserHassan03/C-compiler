.text
.globl g
g:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
sw a0, -20(s0)
lw t0, -20(s0)
mv t1, t0
sw t1, -28(s0)
lw t0, -28(s0)
mv t1, t0
sw t1, -24(s0)
li t1, 1
lw t2, -24(s0)
add t0, t1, t2
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
