    li s1, 17          
    li s5, 1        
    li t0, 2
    blt s1, t0, nonprime  
    li t1, 2          

check_loop:
    bge t1, s1, prime
    div t2, s1, t1    
    rem t3, s1, t1     
    beqz t3, nonprime 

    addi t1, t1, 1  
    j checkloop

not_prime:
    li s5, 0
    li a7, 4
    la a1, msgNotPrime
    ecall
    j exit

prime_done:
    li s5, 1
    li a7, 4
    la a1, msgPrime
    ecall

exit:
    li a7, 10
    ecall