/*
 ============================================================================
 Name        : global_variable_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

int global_count = 0; // initialisatie is niet verplicht, default: 0

void f(void)
{
    printf("global_count: %d\n", ++global_count);
}

int main(void)
{
    f();
    f();
    global_count++;
    printf("global_count: %d\n", global_count);
}
