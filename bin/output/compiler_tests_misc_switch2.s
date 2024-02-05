.text
.globl g
g:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
sw a0, -20(s0)
li t0, 0
mv t1, t0
sw t1, -24(s0)
lw a1, -20(s0)
li t0, 0
beq a1, t0, .LABEL_2
lw a1, -20(s0)
li t0, 2
beq a1, t0, .LABEL_3
lw a1, -20(s0)
li t0, 1
beq a1, t0, .LABEL_4
j .DEFAULT_5
j ENDSWITCH_1
.LABEL_2:
li t1, 1
mv t2, t1
sw t2, -24(s0)
j ENDSWITCH_1
.LABEL_3:
li t1, 2
mv t2, t1
sw t2, -24(s0)
.LABEL_4:
lw t2, -24(s0)
li t3, 1
add t1, t2, t3
mv t2, t1
sw t2, -24(s0)
j ENDSWITCH_1
.DEFAULT_5:
lw t2, -20(s0)
li t3, 1
add t1, t2, t3
mv t2, t1
sw t2, -24(s0)
ENDSWITCH_1:
lw t0, -24(s0)
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
