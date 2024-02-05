.text
.globl f
f:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
li t0, 10
sw t0,-20(s0)
li t1, 20
lw t2, -20(s0)
add t0, t1, t2
sw t0,-24(s0)
lw t0, -24(s0)
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
