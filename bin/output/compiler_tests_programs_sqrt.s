.text
.globl bsqrt
bsqrt:
addi sp,sp,-48
sw s0,44(sp)
addi s0,sp,48
sw a0, -20(s0)
sw a1, -24(s0)
sw a2, -28(s0)
WHILE_1:
lw t1, -20(s0)
li t2, 1
add t0, t1, t2
lw t1, -24(s0)
slt a1, t0, t1
andi a1, a1, 0xff
beq a1, zero, ENDWHILE_2
lw t2, -20(s0)
lw t3, -24(s0)
add t1, t2, t3
li t2, 1
sra t0, t1, t2
sw t0,-32(s0)
lw t1, -32(s0)
lw t2, -32(s0)
mul t0, t1, t2
sw t0,-36(s0)
lw t0, -36(s0)
lw t1, -28(s0)
sgt a1, t0, t1
xori a1, a1, 1
beq a1, zero, ELSE_16
lw t0, -32(s0)
mv t1, t0
sw t1, -20(s0)
j ENDIF_15
ELSE_16:
lw t0, -32(s0)
mv t1, t0
sw t1, -24(s0)
ENDIF_15:
j WHILE_1
ENDWHILE_2:
lw t1, -20(s0)
lw t2, -20(s0)
mul t0, t1, t2
lw t1, -28(s0)
slt a1, t0, t1
andi a1, a1, 0xff
beq a1, zero, ELSE_22
lw t0, -24(s0)
mv a0, t0
j return_0
j ENDIF_21
ELSE_22:
lw t0, -20(s0)
mv a0, t0
j return_0
ENDIF_21:
return_0:
lw s0,44(sp)
addi sp,sp,48
jr ra
