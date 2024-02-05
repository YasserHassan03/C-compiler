.text
.globl multiply
multiply:
addi sp,sp,-32
sw ra,28(sp)
sw s0,24(sp)
sw s1,20(sp)
addi s0,sp,32
sw a0, -20(s0)
sw a1, -24(s0)
li t0, 0
sw t0,-28(s0)
lw t0, -20(s0)
li t1, 0
slt a1, t0, t1
andi a1, a1, 0xff
beq a1, zero, skip_3
lw a0, -20(s0)
neg a0, a0
lw a1, -24(s0)
call multiply
mv t0, a0
neg t0, t0
mv a0, t0
j return_0
skip_3:
WHILE_4:
lw t0, -20(s0)
li t1, 0
sgt a1, t0, t1
andi a1, a1, 0xff
beq a1, zero, ENDWHILE_5
lw t0, -24(s0)
lw t1, -28(s0)
add t1, t1, t0
sw t1, -28(s0)
lw t0, -20(s0)
addi t1, t0, -1
sw t1, -20(s0)
j WHILE_4
ENDWHILE_5:
lw t0, -28(s0)
mv a0, t0
j return_0
return_0:
lw ra,28(sp)
lw s0,24(sp)
lw s1,20(sp)
addi sp,sp,32
jr ra
