/*
 ============================================================================
 Name        : bool_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool b = true;

    printf("b: %d\n", b);
    printf("true: %d\n", true);
    printf("false: %d\n", false);
    printf("2<3: %d\n", 2 < 3);
    printf("2>3: %d\n", 2 > 3);
}
