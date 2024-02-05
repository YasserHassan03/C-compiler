.data
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
j return_0
return_0:
lw ra,12(sp)
lw s0,8(sp)
lw s1,4(sp)
addi sp,sp,16
jr ra
