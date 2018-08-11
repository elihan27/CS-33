//
//  main.c
//  2.64
//
//  Created by Elizabeth Han on 4/9/17.
//  Copyright © 2017 Elizabeth Han. All rights reserved.
//

#include <stdio.h>


int any_odd_one(unsigned x)
{
    unsigned int odd_bits = x & 0x55555555;
    return odd_bits && 1;
}


/*int main(void) {
    int v = any_odd_one(2);
    int w = any_odd_one(3);
    printf ( "v = %d\n", v);
    printf ( "v = %d\n", w);
    return 0;
}
 */
