/*
 ============================================================================
 Name        : func.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include "func.h"

int glob2;
// static:  extern niet bereikbaar
static int glob3 = 333;

static void func2(void)
{
    puts("func2 aangeroepen");
    printf("glob3: %d\n",glob3);
}

void func1(void)
{
    func2();
    glob2 = 144;
    glob1 = 256;
}
