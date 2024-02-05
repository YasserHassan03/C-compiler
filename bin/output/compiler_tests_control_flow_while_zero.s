.text
.globl f
f:
addi sp,sp,-16
sw s0,12(sp)
addi s0,sp,16
WHILE_1:
li a1, 0
beq a1, zero, ENDWHILE_2
j WHILE_1
ENDWHILE_2:
li t0, 19937
mv a0, t0
j return_0
return_0:
lw s0,12(sp)
addi sp,sp,16
jr ra
