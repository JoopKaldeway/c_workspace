/*
 ============================================================================
 Name        : array_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

#define ARRAY_SIZE 6

int main(void)
{
    int a[] = { 1, 4, 9, 16, 25, 36 }; // a krijgt automatisch lengte 6
                                       //    int a[ARRAY_SIZE] = {1,4,9,16,25,36};
    printf("a: ");
    for(int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');

    int a2[ARRAY_SIZE];

    // de elementen van a2 zijn niet geinitialiseerd
    printf("a2: ");
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", a2[i]);
    }
    putchar('\n');

    printf("lengte rij: %d\n", sizeof(a) / sizeof(int));
    /*
        printf("size:");
        int size;
        scanf("%d",&size);

        int a3[size];
    */
    int a4[ARRAY_SIZE] = { 0 };

    printf("a4: ");
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", a4[i]);
    }
    putchar('\n');

    int a5[ARRAY_SIZE] = { 1, 2, 3 };

    printf("a5: ");
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", a5[i]);
    }
    putchar('\n');

    int a6[ARRAY_SIZE] = {[1] = 1, [3] = 3 };

    printf("a6: ");
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", a6[i]);
    }
    putchar('\n');

    int a7[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6 };

    printf("lengte a7: %d\n", sizeof(a7) / sizeof(int));

    int a8[10] = {[0 ... 9] = 7 };

    printf("a8: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", a8[i]);
    }
    putchar('\n');
}
