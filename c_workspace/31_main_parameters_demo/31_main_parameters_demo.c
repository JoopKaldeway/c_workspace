/*
 ============================================================================
 Name        : main_parameters_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

// Alt-F7 -> General -> Execution -> Program Arguments: 1 10 100 1000 a b c 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    for(int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    long sum = 0;
    char * pEnd;
    for(int i = 1; i < argc; i++) {
        sum += strtol(argv[i],&pEnd,10); // http://www.cplusplus.com/reference/cstdlib/strtol/
    }
    printf("sum: %ld\n", sum);
}
