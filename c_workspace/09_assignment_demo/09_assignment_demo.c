/*
 ============================================================================
 Name        : assignment_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int i = 2;
    printf("i==3: %d\n", i == 3);
    printf("i=3: %d\n", i = 3);

    int k = 2;
    printf("k=3: %d\n", k = 3);
    printf("2*(k=4): %d\n", 2 * (k = 4));
    printf("k: %d\n", k);

    //    i = 2;
    //    if (i=3) // warning: moet zijn: (i==3)
    //      	puts("i is gelijk aan 3");
}
