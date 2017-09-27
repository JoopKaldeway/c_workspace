/*
 ============================================================================
 Name        : for_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    for(int i = 11; i < 21; i++) {
        printf("%d ", i * i);
    }

    putchar('\n');

    int i = 10;
    while(1) {
        i++;
        if(i == 15) {
            continue; // sla de rest van de lus over
        }
        printf("%d ", i * i);
        if(i == 20) {
            break; // verlaat de while-opdracht
        }
    }
}
