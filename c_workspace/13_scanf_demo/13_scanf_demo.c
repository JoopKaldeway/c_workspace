/*
 ============================================================================
 Name        : scanf_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int i;
    printf("tik een getal in: ");
    fflush(stdout);
    while(!scanf("%d", &i)) {
        printf("foutieve invoer\n");
        while(getchar() != '\n')
            ; // sla rest van regel over
        printf("tik een getal in: ");
    }
    printf("ingevoerde getal: %d\n", i);
    /*
        int dag, maand, jaar;
        int n;

        printf("voer datum in formaat dd/mm/jjjj: ");
        n = scanf("%d/%d/%d", &dag, &maand, &jaar);
        printf("n: %d\n", n);
        printf("ingevoerde datum: %02d/%02d/%4d\n", dag, maand, jaar);
    */
    int dag, maand, jaar;
    int n;

    printf("voer dag, maand en jaar in: ");
    n = scanf("%d %d %d", &dag, &maand, &jaar);
    printf("n: %d\n", n);
    printf("ingevoerde datum: %02d/%02d/%4d\n", dag, maand, jaar);

    // hexadecimaal invoer:
    printf("tik een hexadecimaal getal in: ");
    while(scanf("%x", &i) == 0) {
        printf("foutieve invoer\n");
        while(getchar() != '\n')
            ; // sla rest van regel over
        printf("tik een hexadecimaal getal in: ");
    }
    printf("ingevoerde getal: %x %d", i, i);
}
