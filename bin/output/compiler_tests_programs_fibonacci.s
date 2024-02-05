.text
.globl fib
fib:
addi sp,sp,-32
sw ra,28(sp)
sw s0,24(sp)
sw s1,20(sp)
addi s0,sp,32
sw a0, -20(s0)
lw t0, -20(s0)
li t1, 0
sgt a1, t0, t1
xori a1, a1, 1
beq a1, zero, skip_3
li t0, 0
mv a0, t0
j return_0
skip_3:
lw t0, -20(s0)
li t1, 1
sub a1, t0, t1
seqz a1, a1
beq a1, zero, skip_6
li t0, 1
mv a0, t0
j return_0
skip_6:
lw t1, -20(s0)
li t2, 1
sub a0, t1, t2
call fib
mv s1, a0
lw t1, -20(s0)
li t2, 2
sub a0, t1, t2
call fib
mv s2, a0
add t0, s1, s2
mv a0, t0
j return_0
return_0:
lw ra,28(sp)
lw s0,24(sp)
lw s1,20(sp)
addi sp,sp,32
jr ra
