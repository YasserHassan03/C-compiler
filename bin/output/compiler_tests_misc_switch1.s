.text
.globl g
g:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
sw a0, -20(s0)
lw a1, -20(s0)
li t0, 1
beq a1, t0, .LABEL_2
lw a1, -20(s0)
li t0, 2
beq a1, t0, .LABEL_3
j ENDSWITCH_1
.LABEL_2:
li t1, 10
mv a0, t1
j return_0
.LABEL_3:
li t1, 11
mv a0, t1
j return_0
ENDSWITCH_1:
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
