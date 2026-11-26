
li x7, 0x00000400

li t1, 5000
li t2, 8000
li t3, 12000

sw t1, 0(x7)
sw t2, 4(x7)
sw t3, 8(x7)


lw s0, 0(x7)
lw s1, 4(x7)
lw s2, 8(x7)

add s1, s1, s0
add s3, s2, s1

sw s8 ,12 (s0)

nop


