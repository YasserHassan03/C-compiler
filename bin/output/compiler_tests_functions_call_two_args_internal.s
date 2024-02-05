.text
.globl g
g:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
sw a0, -20(s0)
sw a1, -24(s0)
lw t1, -20(s0)
lw t2, -24(s0)
add t0, t1, t2
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
.text
.globl f
f:
addi sp,sp,-16
sw ra,12(sp)
sw s0,8(sp)
sw s1,4(sp)
addi s0,sp,16
li a0, 10
li a1, 20
call g
mv t0, a0
mv a0, t0
j return_3
return_3:
lw ra,12(sp)
lw s0,8(sp)
lw s1,4(sp)
addi sp,sp,16
jr ra
