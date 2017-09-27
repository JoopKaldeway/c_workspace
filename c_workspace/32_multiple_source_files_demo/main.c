/*
 ============================================================================
 Name        : main.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include "func.h"

int glob1 = 5;

int main(void)
{
    func1();
    printf("glob1: %d, glob2: %d\n", glob1, glob2);

    return 0;
}
