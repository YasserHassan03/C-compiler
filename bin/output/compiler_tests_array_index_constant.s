.text
.globl f
f:
addi sp,sp,-64
sw s0,60(sp)
addi s0,sp,64
li t0, 0
li t1, 0
li t2, 1
mul t1, t1, t2
add t0, t0, t1
li t2, 4
mul t0, t0, t2
addi t0, t0, 20
sub t0, s0, t0
li t1, 23
mv t2, t1
sw t1, 0(t0)
li t0, 0
li t0, 0
li t1, 0
li t3, 1
mul t1, t1, t3
add t0, t0, t1
li t3, 4
mul t0, t0, t3
addi t0, t0, 20
sub t0, s0, t0
lw t0, 0(t0)
mv a0, t0
j return_0
return_0:
lw s0,60(sp)
addi sp,sp,64
jr ra
