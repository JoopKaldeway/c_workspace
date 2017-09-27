/*
 ============================================================================
 Name        : int_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <limits.h>

#define printf __mingw_printf // geen warning bij %lld (gnu11)

int main(void)
{
    puts("int info");
    printf("sizeof(int): %d\n", sizeof(int));
    puts("sizeof(int): \%%d\n");
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);

    // overflow wordt niet gecheckt
    int int_max = INT_MAX;
    printf("INT_MAX+1: %d\n", int_max + 1);
    //	printf("INT_MAX+1: %d\n",INT_MAX+1); // warning: integer overflow in expression
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("UINT_MAX+1: %u\n", UINT_MAX + 1);
    putchar('\n');

    puts("short info");
    printf("sizeof(short): %d\n", sizeof(short));
    printf("SHRT_MIN: %hd\n", SHRT_MIN);
    printf("SHRT_MAX: %hd\n", SHRT_MAX);
    printf("USHRT_MAX: %hu\n", USHRT_MAX);
    putchar('\n');

    puts("long info");
    printf("sizeof(long): %d\n", sizeof(long));
    printf("LONG_MIN: %ld\n", LONG_MIN);
    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("ULONG_MAX: %lu\n", ULONG_MAX);
    putchar('\n');

    puts("long long info");
    printf("sizeof(long long): %d\n", sizeof(long long));

    // -std=gnu11
    printf("LLONG_MIN: %I64d \n", LLONG_MIN);
    printf("LLONG_MAX: %I64d \n", LLONG_MAX);
    printf("ULLONG_MAX: %I64u \n", ULLONG_MAX);
    putchar('\n');

    // -std=c11
    //    printf("LLONG_MIN: %lld \n", LLONG_MIN);
    //    printf("LLONG_MAX: %lld \n", LLONG_MAX);
    //    printf("ULLONG_MAX: %llu \n", ULLONG_MAX);
    //    putchar('\n');

    printf("-1: %d(signed) %u(unsigned)\n", -1, -1);
    printf("UINT_MAX: %d(signed) %u(unsigned)\n", UINT_MAX, UINT_MAX);
    putchar('\n');

    int i = 2147483647;
    printf("2147483647+2147483647: %d \n", i + i);
    //    printf("2147483647+2147483647: %d \n",2147483647+2147483647);

    // -std=gnu11
    //printf("2147483647+2147483647LL: %I64d \n", 2147483647 + 2147483647LL);

    // -std=c11
    printf("2147483647+2147483647LL: %lld \n", 2147483647 + 2147483647LL);
}