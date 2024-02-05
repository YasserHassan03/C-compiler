.text
.globl f
f:
addi sp,sp,-64
sw s0,60(sp)
addi s0,sp,64
li t0, 8
mv t1, t0
sw t1, -20(s0)
j ENDFOR_1
FOR_2 :
li t0, 0
lw t2, -20(s0)
li t3, 8
sub t1, t2, t3
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
li t1, 16
slt a1, t0, t1
andi a1, a1, 0xff
bne a1, zero, FOR_2
li t0, 0
mv t1, t0
sw t1, -56(s0)
li t0, 0
mv t1, t0
sw t1, -20(s0)
j ENDFOR_7
FOR_8 :
lw t1, -56(s0)
li t3, 0
lw t5, -20(s0)
li t6, 0
add t4, t5, t6
li t5, 1
mul t4, t4, t5
add t3, t3, t4
li t5, 4
mul t3, t3, t5
addi t3, t3, 24
sub t3, s0, t3
lw t3, 0(t3)
add t0, t1, t3
mv t1, t0
sw t1, -56(s0)
lw a1, -20(s0)
addi t0, a1, 1
sw t0, -20(s0)
ENDFOR_7 :
lw t0, -20(s0)
li t1, 8
slt a1, t0, t1
andi a1, a1, 0xff
bne a1, zero, FOR_8
lw t0, -56(s0)
mv a0, t0
j return_0
return_0:
lw s0,60(sp)
addi sp,sp,64
jr ra
