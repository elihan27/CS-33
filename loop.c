//
//  main.c
//  2.64
//
//  Created by Elizabeth Han on 4/9/17.
//  Copyright © 2017 Elizabeth Han. All rights reserved.
//

#include <stdio.h>


long loop(long x, int n)
{
    long result =0;
    long mask;
    for (mask = 1; mask!=0; mask = mask<< (n &0xFF)) {
        result |=(x&mask);
    }
    return result;
}



/*
 A.	Which registers hold program values x, n, result, and mask?
        a.	%r8 and %rdi  hold x, %esi and %ecx hold n, %rax holds result, %rdx holds mask
 B.	What are the initial values of result and mask?
        a.	result = 0, mask = 1
 C.	What is the test condition for mask?
        a.	  testq	%rdx, %rdx
 D.	How does mask get updated?
        a.	At the end of every loop, mask gets left-shifted by the last byte of n.
 E.	How does result get updated?
        a.	In the loop, result becomes equal to itself OR the result of x AND mask.


*/
