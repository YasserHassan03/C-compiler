.text
.globl f
f:
addi sp,sp,-48
sw s0,44(sp)
addi s0,sp,48
fsw fa0, -20(s0)
sw a0, -24(s0)
lui a1, %hi(.LC_1)
flw ft0, %lo(.LC_1)(a1)
fsw ft0,-28(s0)
li t0, 0
sw t0,-32(s0)
WHILE_2:
lw t0, -32(s0)
lw t1, -24(s0)
slt a1, t0, t1
andi a1, a1, 0xff
beq a1, zero, ENDWHILE_3
lw t0, -32(s0)
addi t1, t0, 1
sw t1, -32(s0)
flw ft1, -28(s0)
flw ft2, -20(s0)
fmul.s ft0, ft1, ft2
fmv.s ft1, ft0
fsw ft1, -28(s0)
j WHILE_2
ENDWHILE_3:
flw ft0, -28(s0)
fmv.s fa0, ft0
j return_0
return_0:
lw s0,44(sp)
addi sp,sp,48
jr ra
.LC_1:
.word 1065353216
