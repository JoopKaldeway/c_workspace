/*
 ============================================================================
 Name        : floating_point_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

// onderstaande #define nodig als std=gnu11; niet nodig als std=c11
// nodig voor format-specifier %le
// #define __USE_MINGW_ANSI_STDIO 1 // alternatief: #define printf __mingw_printf

#include <stdio.h>
#include <limits.h>
#include <float.h>

// onderstaande #define nodig als std=gnu11; niet nodig als std=c11
// nodig voor format-specifier %le
#define printf __mingw_printf

int main(void)
{
    printf("8/3:           %d\n", 8 / 3);
    printf("8.0/3:         %f\n", 8.0 / 3);
    printf("(double)8/3:   %f\n", (double)8 / 3);
    printf("(double)(8/3): %f\n", (double)(8 / 3));
    putchar('\n');

    printf("1.0/3:                    %.17f\n", 1.0 / 3);
    printf("3*0.3333333333333333:     %.17f\n", 3 * 0.3333333333333333);
    printf("0.9999999999999999:       %.17f\n", 0.9999999999999999);
    printf("0.9999999999999999+1e-16: %.17f\n", 0.9999999999999999 + 1e-16);
    printf("1.0/3:                    %.17e\n", 1.0 / 3);
    printf("3*0.3333333333333333:     %.17e\n", 3 * 0.3333333333333333);
    printf("0.9999999999999999:       %.17e\n", 0.9999999999999999);
    putchar('\n');

    printf("25*0.28-7: %.e\n", 25 * 0.28 - 7);
    putchar('\n');

    printf("sizeof(double):      %d\n", sizeof(double));
    printf("sizeof(float):       %d\n", sizeof(float));
    printf("sizeof(long double): %d\n", sizeof(long double));
    printf("sizeof(1.0):         %d\n", sizeof(1.0));
    printf("sizeof(1.0f):        %d\n", sizeof(1.0f));
    printf("sizeof(1.0l):        %d\n", sizeof(1.0l));
    putchar('\n');

    printf("FLT_MIN: %e\n", FLT_MIN);
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("DBL_MIN: %e\n", DBL_MIN);
    printf("DBL_MAX: %e\n", DBL_MAX);

    printf("LDBL_MIN: %le\n", LDBL_MIN);
    printf("LDBL_MAX: %le\n", LDBL_MAX);
}
