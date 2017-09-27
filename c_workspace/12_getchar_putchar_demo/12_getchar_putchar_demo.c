/*
 ============================================================================
 Name        : getchar_putchar_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    printf("tik tekst in en druk daarna op Enter-toets: ");

    //    int ch = getchar();
    //    while(ch != '\n') {
    //        putchar(ch);
    //        ch = getchar();
    //    }

    int ch;
    int n = 0;
    while((ch = getchar()) != '\n') {
        n++;
        putchar(ch);
    }
    putchar('\n');

    printf("aantal karakters: %d", n);
}
