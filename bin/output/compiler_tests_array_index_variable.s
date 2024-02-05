.text
.globl f
f:
addi sp,sp,-64
sw s0,60(sp)
addi s0,sp,64
li t0, 0
mv t1, t0
sw t1, -20(s0)
j ENDFOR_1
FOR_2 :
li t0, 0
lw t1, -20(s0)
li t2, 1
mul t1, t1, t2
add t0, t0, t1
li t2, 4
mul t0, t0, t2
addi t0, t0, 24
sub t0, s0, t0
lw t1, -20(s0)
mv t2, t1
sw t1, 0(t0)
li t0, 0
lw t0, -20(s0)
addi t1, t0, 1
sw t1, -20(s0)
ENDFOR_1 :
lw t0, -20(s0)
li t1, 8
slt a1, t0, t1
andi a1, a1, 0xff
bne a1, zero, FOR_2
li t0, 0
li t1, 4
li t3, 1
mul t1, t1, t3
add t0, t0, t1
li t3, 4
mul t0, t0, t3
addi t0, t0, 24
sub t0, s0, t0
lw t0, 0(t0)
mv a0, t0
j return_0
return_0:
lw s0,60(sp)
addi sp,sp,64
jr ra
