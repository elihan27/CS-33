//
//  main.c
//  2.73
//
//  Created by Elizabeth Han on 4/9/17.
//  Copyright © 2017 Elizabeth Han. All rights reserved.
//

#include <stdio.h>
#include <limits.h>


int saturating_add (int x, int y)
{
    int sum = x+y;
    int check = INT_MIN;
    
    //int positive = ~(~x & check) ^ ~(~y & check) ^ ~(~sum & check);
    //int negative = ~(x & check) ^ ~(y & check) ^ ~(sum & check);
    
    int positive = ~(x & check) & ~(y & check) & (sum & check);
    int negative = (x & check) & (y & check) & ~(sum & check);
    
    int size = sizeof(int)<<3;
    int shift = size -1;
    
    positive = positive >> shift;
    
    negative = negative >> shift;
    
    //int min = INT_MIN;
    //int checkers = INT_MIN & negative;
    
    return (INT_MAX & positive) + (INT_MIN & negative) + (~positive & ~negative & sum);
    
}

/*int main(void)
{
    int v = saturating_add(INT_MIN, -7);
    printf ( "v = %d\n", v);
    int w = saturating_add(INT_MAX, 1);
    printf ( "w = %d\n", w);
    int x = saturating_add(2, 5);
    printf ( "w = %d\n", x);
    int y = saturating_add(-2, -5);
    printf ( "w = %d\n", y);
    int z = saturating_add(2, -5);
    printf ( "w = %d\n", z);

    return 0;
    
}
 */
