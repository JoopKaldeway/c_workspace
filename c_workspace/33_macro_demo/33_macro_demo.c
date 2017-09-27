/*
 ============================================================================
 Name        : macro_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

#define sqr(x) ((x) * (x))

#define multiply(x, y) x* y
#define multiply2(x, y) (x) * (y)

#define subtract(x, y) x - y
#define subtract2(x, y) (x) - (y)
#define subtract3(x, y) ((x) - (y))

int main(void)
{
    printf("sqr(12)): %d\n", sqr(12));
    printf("sqr(sqr(3)): %d\n", sqr(sqr(3)));

    // multiply(1-2,1-2) = 1-2*1-2 = 1-2-2 = -3
    printf("multiply(1-2,1-2): %d\n", multiply(1 - 2, 1 - 2));

    // multiply2(1-2,1-2) = (1-2)*(1-2) = (-1)*(-1) = 1
    printf("multiply2(1-2,1-2): %d\n", multiply2(1 - 2, 1 - 2));
    printf("multiply2(2,multiply2(3,4)): %d\n", multiply2(2, multiply2(3, 4)));

    //======================================================

    // -subtract(2,1-4) =  - 2 - 1 - 4 = -7
    printf("-subtract(2,1-4): %d\n", -subtract(2, 1 - 4));

    // -subtract2(2,1-4) =  - 2 - (1-4) = - 2 + 3 = 1
    printf("-subtract2(2,1-4): %d\n", -subtract2(2, 1 - 4));

    // -subtract3(2,1-4) =  - (2 - (1-4)) = - (2+3) = -5
    printf("-subtract3(2,1-4): %d\n", -subtract3(2, 1 - 4));
}
