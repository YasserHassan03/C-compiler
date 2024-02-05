.text
.globl f
f:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
li t0, 1
mv t1, t0
sw t1, -20(s0)
WHILE_1:
lw a1, -20(s0)
beq a1, zero, ENDWHILE_2
li t0, 0
mv t1, t0
sw t1, -20(s0)
j WHILE_1
ENDWHILE_2:
li t0, 19937
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
