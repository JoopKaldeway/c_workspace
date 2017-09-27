/*
 ============================================================================
 Name        : main.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include "stack.h"

int main(void)
{
    Stack stack = { { 0 }, -1 };
    //		init_stack(&stack);

    for(int i = 1; i < 6; i++) {
        push(&stack, i);
        printf("push(%d): ", i);
        show(stack);
    }

    for(int i = 1; i < 6; i++) {
        int j = pop(&stack);
        printf("pop()  : %d\n", j);
        printf("stack  : ");
        show(stack);
    }

    //	pop(&stack);  // gaat fout
}
