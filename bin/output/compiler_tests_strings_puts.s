.data
.text
.globl g
g:
addi sp,sp,-16
sw ra,12(sp)
sw s0,8(sp)
sw s1,4(sp)
addi s0,sp,16
call fakeputs
return_0:
lw ra,12(sp)
lw s0,8(sp)
lw s1,4(sp)
addi sp,sp,16
jr ra
