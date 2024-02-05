.text
.globl g
g:
addi sp,sp,-16
sw s0,12(sp)
addi s0,sp,16
li t1, 0
li t2, 1
add t0, t1, t2
mv a0, t0
j return_0
return_0:
lw s0,12(sp)
addi sp,sp,16
jr ra
