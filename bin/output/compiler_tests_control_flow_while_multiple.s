.text
.globl f
f:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
li t0, 20
mv t1, t0
sw t1, -20(s0)
WHILE_1:
lw t0, -20(s0)
li t1, 10
sgt a1, t0, t1
andi a1, a1, 0xff
beq a1, zero, ENDWHILE_2
lw t1, -20(s0)
li t2, 1
sub t0, t1, t2
mv t1, t0
sw t1, -20(s0)
j WHILE_1
ENDWHILE_2:
lw t0, -20(s0)
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
