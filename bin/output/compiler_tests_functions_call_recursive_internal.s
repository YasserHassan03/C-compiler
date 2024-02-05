.text
.globl f
f:
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
beq a1, zero, skip_3
li t0, 0
mv a0, t0
j return_0
skip_3:
lw s1, -20(s0)
lw t2, -20(s0)
li t3, 1
sub a0, t2, t3
call f
mv t1, a0
add t0, s1, t1
mv a0, t0
j return_0
return_0:
lw ra,28(sp)
lw s0,24(sp)
lw s1,20(sp)
addi sp,sp,32
jr ra
