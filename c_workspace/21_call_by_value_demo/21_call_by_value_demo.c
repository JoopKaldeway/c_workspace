/*
 ============================================================================
 Name        : call_by_value_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

int succ(int i)
{
    printf("inside function: i = %d\n", i);
    i++; // kopie van i wordt gewijzigd
    printf("inside function: i = %d\n", i);
    return i;
}

int main(void)
{
    int i = 20;
    printf("outside function: i = %d\n", i);
    int j = succ(i);
    printf("j: %d\n", j);
    printf("outside function: i = %d\n", i); // i blijft ongewijzigd
}
