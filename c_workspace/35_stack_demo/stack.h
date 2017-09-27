/*
 ============================================================================
 Name        : stack.h
 Author      : J. Kaldeway
 ============================================================================
 */

#ifndef _STACK_H
#define _STACK_H

#define STACKSIZE 100

typedef struct {
    int a[STACKSIZE];
    int top;
} Stack;

void init_stack(Stack* ps);
void push(Stack* ps, int data);
int pop(Stack* ps);
void show(Stack s);

#endif /* _STACK_H */
