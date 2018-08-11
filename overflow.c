//
//  main.c
//  Test1.2
//
//  Created by Elizabeth Han on 4/20/17.
//  Copyright © 2017 Elizabeth Han. All rights reserved.
//

#include <stdio.h>

/*void remdiv(long x, long y,long *qp, long *rp)
{
    long q = x/y;
    long r = x%y;
    *qp = q;
    *rp = r;
}
*/

/*long loop(long x, int n)
{
    long result =1;
    long mask;
    for (mask = n; mask!=0; mask= mask<<1) {
        result |= (x & result);
    }
    return result;
    
    
}

long loop(long x, int n)
{
    long result =1;
    long mask;
    for (mask = n; mask!=0; mask= mask<<1) {
        result |= (x & result);
    }
    return result;
    
    
}

 */



/*long loop(long x, int n)
{
    long result =1;
    long mask = n;
    while (mask!=0)
    {
        result |= (x& result);
        mask = mask << (n&0xFF);
    
    }
    return result;
}
*/


_Bool
testovf (long n)
{
    return n + 9223372036854775807 < n;
}

int main(void)
{}
