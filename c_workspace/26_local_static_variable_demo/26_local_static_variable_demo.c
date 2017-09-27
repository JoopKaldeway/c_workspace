/*
 ============================================================================
 Name        : local_static_variable_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

void f(void)
{
    static int local_static_count = 0; // alleen bij de eerste aanroep van f vindt de initialisatie plaats
    printf("call %d\n", ++local_static_count);
}

int main(void)
{
    f();
    f();
}
