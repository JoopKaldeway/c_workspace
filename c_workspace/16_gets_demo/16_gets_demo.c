/*
 ============================================================================
 Name        : gets_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    printf("tik string1 in: ");
    fflush(stdout);
    gets(s);

    for(int i = 0; i < strlen(s); i++) {
        printf("%d ", s[i]);
    }
    putchar('\n');
    puts(s);

    printf("tik string2 in: ");
    fflush(stdout);
    fgets(s, 9, stdin);
    int len = strlen(s);
    if(s[len - 1] == '\n') {
        s[len - 1] = '\0'; // verwijder '\n' uit string
    } else {
        while(getchar() != '\n')
            ; // skip rest van regel
    }
    for(int i = 0; i < strlen(s); i++) {
        printf("%d ", s[i]);
    }
    putchar('\n');
    puts(s);

    char s2[10];
    printf("tik string3 met spaties in: ");
    fflush(stdout);
    scanf("%9s", s2);
    puts(s2);
    while(getchar() != '\n')
        ;

    char s3[10];
    printf("tik string4 met spaties in: ");
    fflush(stdout);
    scanf("%9[^\n]", s3);
    puts(s3);

    //    fflush(stdout);
}
