/*
 ============================================================================
 Name        : function_prototype_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <assert.h>

// int sum(int x,int y);
int sum(int, int); // prototype
double reciprocal(double);

int main(void)
{
    int z = sum(2, 3); // functie-aanroep
    printf("z: %d\n", z);
    z = sum(sum(2, 3), 4);
    printf("z: %d\n", z);

    printf("%f\n", reciprocal(10));
    //    printf("%f\n", reciprocal(0));

    return 0;
}

int sum(int x, int y)
{ // functie-definitie
    return x + y;
}

double reciprocal(double x)
{
    assert(x != 0);
    return 1 / x;
}
