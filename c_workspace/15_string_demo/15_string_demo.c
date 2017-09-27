/*
 ============================================================================
 Name        : string_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "string";
    printf("strlen(s1): %d\n", strlen(s1));
    printf("sizeof(s1): %d\n", sizeof(s1));

    printf("s1: ");
    for(int i = 0; i < sizeof(s1); i++) {
        printf("%d ", s1[i]);
    }
    printf("\n");
    printf("s1: ");
    for(int i = 0; i < strlen(s1); i++) {
        printf("%c", s1[i]);
    }
    putchar('\n');

    char s2[] = { "string" };
    printf("strlen(s2): %d\n", strlen(s2));
    printf("sizeof(s2): %d\n", sizeof(s2));

    char s3[] = { 's', 't', 'r', 'i', 'n', 'g', '\0' };
    printf("strlen(s3): %d\n", strlen(s3));
    printf("sizeof(s3): %d\n", sizeof(s3));
    printf("s3: %s\n", s3);

    char s4[7] = { 's', 't', 'r', 'i', 'n', 'g', '\0' };
    printf("s4: %s\n", s4);

    printf("strlen(\"string\"): %d\n", strlen("string"));
    printf("sizeof(\"string\"): %d\n", sizeof("string"));

    char s5[] = "voorbeeld";
    puts(s5);
    printf("strlen(s5): %d\n", strlen(s5));
    printf("sizeof(s5): %d\n", sizeof(s5));
    s5[4] = '\0';
    puts(s5);
    printf("strlen(s5): %d\n", strlen(s5));
    printf("sizeof(s5): %d\n", sizeof(s5));

    //    char ch = 'π';
    //    printf("%c",ch);

    char s[] = "π";
    printf(s);
}
