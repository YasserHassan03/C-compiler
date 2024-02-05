.text
.globl f
f:
addi sp,sp,-48
sw s0,44(sp)
addi s0,sp,48
sw fa1, -20(s0)
sw fa2, -28(s0)
lw ft1, -20(s0)
lw ft2, -28(s0)
fadd.s ft0, ft1, ft2
mv a0, ft0
j return_0
return_0:
lw s0,44(sp)
addi sp,sp,48
jr ra
