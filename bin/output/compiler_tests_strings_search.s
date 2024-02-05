.text
.globl search
search:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
sw a1, -20(s0)
sw a2, -21(s0)
WHILE_1:
lw a1, -20(s0)
beq a1, zero, ENDWHILE_2
lw t0, -20(s0)
lw t1, -21(s0)
sub a1, t0, t1
seqz a1, a1
beq a1, zero, skip_5
lw t0, -20(s0)
mv a0, t0
j return_0
skip_5:
lw t1, -20(s0)
li t2, 1
add t0, t1, t2
mv t1, t0
sw t1, -20(s0)
j WHILE_1
ENDWHILE_2:
li t0, 0
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
