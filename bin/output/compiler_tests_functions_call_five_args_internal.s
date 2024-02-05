.text
.globl g
g:
addi sp,sp,-48
sw s0,44(sp)
addi s0,sp,48
sw a0, -20(s0)
sw a1, -24(s0)
sw a2, -28(s0)
sw a3, -32(s0)
sw a4, -36(s0)
lw t4, -20(s0)
lw t5, -24(s0)
add t3, t4, t5
lw t4, -28(s0)
add t2, t3, t4
lw t3, -32(s0)
add t1, t2, t3
lw t2, -36(s0)
add t0, t1, t2
mv a0, t0
j return_0
return_0:
lw s0,44(sp)
addi sp,sp,48
jr ra
.text
.globl f
f:
addi sp,sp,-16
sw ra,12(sp)
sw s0,8(sp)
sw s1,4(sp)
addi s0,sp,16
li a0, 1
li a1, 2
li a2, 3
li a3, 4
li a4, 5
call g
mv t0, a0
mv a0, t0
j return_9
return_9:
lw ra,12(sp)
lw s0,8(sp)
lw s1,4(sp)
addi sp,sp,16
jr ra
