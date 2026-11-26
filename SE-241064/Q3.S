
    la t0, array     
    li t1, 8          

    lw s0, 0(t0)     
    lw s1, 0(t0)      

    addi t0, t0, 4    
    addi t1, t1, -1

loop:
    beqz t1, exit

    lw t2, 0(t0)

    # Check max
    bgt t2, s0, set_max

check_min:
    # Check min
    blt t2, s1, set_min

next:
    addi t0, t0, 4
    addi t1, t1, -1
    j loop

set_max:
    mv s0, t2
    j check_min

set_min:
    mv s1, t2
    j next

exit:

    li a7, 10
    ecall