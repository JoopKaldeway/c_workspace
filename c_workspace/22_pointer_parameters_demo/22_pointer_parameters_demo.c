/*
 ============================================================================
 Name        : pointer_parameters_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

void swap1(int i, int j)
{
    printf("inside function: i = %d; j = %d\n", i, j);
    int h = i;
    i = j;
    j = h;
    printf("inside function: i = %d; j = %d\n", i, j);
}

void swap2(int* pi, int* pj)
{
    int h = *pi;
    *pi = *pj;
    *pj = h;
}

int main(void)
{
    int i = 20, j = 30;
    printf("outside function: i = %d; j = %d\n", i, j);
    swap1(i, j);
    printf("outside function: i = %d; j = %d\n", i, j);

    swap2(&i, &j); // geef de adressen van i en j mee
    printf("outside function: i = %d; j = %d\n", i, j);
}
