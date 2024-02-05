.text
.globl f
f:
addi sp,sp,-32
sw s0,28(sp)
addi s0,sp,32
li t0, 0
mv t1, t0
sw t1, -20(s0)
j ENDFOR_1
FOR_2 :
lw t1, -20(s0)
li t2, 1
add t0, t1, t2
mv t1, t0
sw t1, -20(s0)
ENDFOR_1 :
lw t0, -20(s0)
li t1, 1
slt a1, t0, t1
andi a1, a1, 0xff
bne a1, zero, FOR_2
lw t1, -20(s0)
li t2, 19937
add t0, t1, t2
mv a0, t0
j return_0
return_0:
lw s0,28(sp)
addi sp,sp,32
jr ra
