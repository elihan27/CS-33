//
//  main.c
//  2.73-redo
//
//  Created by Elizabeth Han on 4/9/17.
//  Copyright © 2017 Elizabeth Han. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>


int saturating_add (int x, int y)
{
    int z;
    int size = sizeof(int)<<3;
    int shift = size -1;
    bool check = __builtin_add_overflow(x, y, &z);
    
    int fillz = z << shift;
    fillz = fillz >> shift;
    int fillcheck = check << shift;
    fillcheck = fillcheck >> shift;
    
  //  int max = INT_MAX;
    
    return ((fillz & fillcheck) & INT_MIN) + ((~fillz & fillcheck)& INT_MAX) + (~fillcheck & z);
    
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

}
 */
