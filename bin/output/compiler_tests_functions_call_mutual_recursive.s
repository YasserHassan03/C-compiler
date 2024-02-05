.data
.text
.globl r1
r1:
addi sp,sp,-32
sw ra,28(sp)
sw s0,24(sp)
sw s1,20(sp)
addi s0,sp,32
sw a0, -20(s0)
lw t0, -20(s0)
li t1, 0
sub a1, t0, t1
seqz a1, a1
beq a1, zero, ELSE_4
li t0, 1
mv a0, t0
j return_0
j ENDIF_3
ELSE_4:
lw t1, -20(s0)
li t2, 1
sub a0, t1, t2
call r2
mv s1, a0
lw t1, -20(s0)
li t2, 1
sub a0, t1, t2
call r2
mv s2, a0
add t0, s1, s2
mv a0, t0
j return_0
ENDIF_3:
return_0:
lw ra,28(sp)
lw s0,24(sp)
lw s1,20(sp)
addi sp,sp,32
jr ra
