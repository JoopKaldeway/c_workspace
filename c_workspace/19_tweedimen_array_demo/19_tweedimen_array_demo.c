/*
 ============================================================================
 Name        : tweedimen_array_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    //	char* dag1[7] = { "zondag", "maandag", "dinsdag", "woensdag", "donderdag",
    //			"vrijdag", "zaterdag" };
    //	char* dag2[] = { "zondag", "maandag", "dinsdag", "woensdag", "donderdag",
    //			"vrijdag", "zaterdag" };
    char dag3[7][10] = { "zondag", "maandag", "dinsdag", "woensdag", "donderdag", "vrijdag", "zaterdag" };

    int k;
    for(k = 0; k < 7; k++) {
        printf("%s\n", dag3[k]);
    }
    putchar('\n');

    dag3[0][0] = 'Z';
    **(dag3 + 1) = 'M';

    for(k = 0; k < 7; k++) {
        printf("%s\n", dag3[k]);
    }
    putchar('\n');

    //	char dag4[][10] = { "zondag", "maandag", "dinsdag", "woensdag", "donderdag",
    //			"vrijdag", "zaterdag" };

    int a1[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    int a2[3][3] = { { 1, 2, 3 }, { 4, 5 }, { 7 } };
    int a3[][3] = { { 1 }, { 3, 4 }, { 7, 8, 9 } };

    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", a1[i][j]);
        puts("");
    }
    putchar('\n');

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", a2[i][j]);
        puts("");
    }
    putchar('\n');

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", a3[i][j]);
        puts("");
    }
    putchar('\n');

    printf("sizeof(a1): %d\n", sizeof(a1));
    printf("sizeof(a2): %d\n", sizeof(a2));
    printf("sizeof(a3): %d\n", sizeof(a3));
}
