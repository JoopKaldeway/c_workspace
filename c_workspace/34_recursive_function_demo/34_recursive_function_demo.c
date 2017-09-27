/*
 ============================================================================
 Name        : recursive_function_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */
 
#include <stdio.h>
#include <assert.h>
#include <time.h>

#define printf __mingw_printf // gnu11: geen warning bij %lld

int som1(int n)
{
    int som = 0;
    for(int i = 1; i <= n; i++) {
        som = som + i;
    }
    return som;
}

int som2(int n)
{
    return (n * (n + 1)) / 2;
}

int som3(int n)
{
    //    assert(n > 0);
//    if(n < 1) {
//        return -1;
//    }

    if(n == 1) { // basisgeval
        return 1;
    } else 
    {
        return som3(n - 1) + n;
    }
}

long long fac1(int n)
{
    long long fac = 1LL;
    for(int i = 2; i <= n; i++) {
        fac *= i;
    }
    return fac;
}

long long fac2(int n)
{
    if(n < 0) { // error
        return -1LL;
    } else if(n == 0) { // basisgeval
        return 1LL;
    } else {
        return n * fac2(n - 1);
    }
}

long long fib1(int n)
{
    if(n <= 1) { // basisgevallen
        return n;
    } else {
        return fib1(n - 1) + fib1(n - 2);
    }
}

long long fib2(int n)
{
    long long fvorig = 0LL, f = 1LL;
    if(n <= 1) {
        return n;
    } else {
        for(int i = 2; i < n + 1; i++) {
            long long h = fvorig;
            fvorig = f;
            f = f + h;
        }
    }
    return f;
}

int main(void)
{
    printf("som1(10): %d\n", som1(10));
    printf("som2(10): %d\n", som2(10));
    printf("som3(10): %d\n", som3(10));
    //	printf("som3(-1): %d\n", som3(-1));

    printf("fac1(10): %lld\n", fac1(10));
    printf("fac2(10): %lld\n", fac2(10));

    // overflow bij i = 21
    for(int i = 0; i <= 25; i++) {
        printf("fac2(%d): %lld\n", i, fac2(i));
    }
    for(int i = 0; i <= 50; i++) {
        printf("fib2(%d): %lld\n", i, fib2(i));
    }

    clock_t t;

    t = clock();
    printf("fib1(35): %lld\n", fib1(35));
    t = clock() - t;

    printf("tijdsduur: %f seconds\n", ((double)t) / CLOCKS_PER_SEC);

    // fib1(45) duurt bij mij 8 sec. 
    puts("Even geduld, fib1(45) wordt berekend ...");

    t = clock();
    printf("fib1(45): %lld\n", fib1(45));
    t = clock() - t;

    printf("tijdsduur: %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
}
