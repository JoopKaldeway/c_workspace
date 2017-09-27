/*
 ============================================================================
 Name        : printf_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int a = 8;
    printf("a is gelijk aan %d\n", a);

    int b = 14;
    printf("het kwadraat van %d is %d\n", b, b * b);

    // rechts uitlijnen
    for(int i = 1; i < 11; i++)
        printf("[%6d]\n", i * i);

    // links uitlijnen
    for(int i = 1; i < 11; i++)
        printf("[%-5d]\n", i * i);

    // uitlijnen m.b.v. een parameter
    for(int i = 1; i < 11; i++)
        printf("[%*d]\n", i, i * i);
}
