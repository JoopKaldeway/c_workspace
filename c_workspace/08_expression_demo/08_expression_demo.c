/*
 ============================================================================
 Name        : expression_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("3+4*5+6: %d\n", 3 + 4 * 5 + 6);
    printf("((3+4)*5)+6: %d\n", ((3 + 4) * 5) + 6);

    printf("e: %.15f\n", exp(1));
    // M_E is niet bekend bij c99
    printf("M_E: %.15f\n", M_E);

    printf("pi: %.15f\n", 4 * atan(1));
    // M_PI is niet bekend bij c99
    printf("M_PI: %.15f\n", M_PI);

    //    printf("2<3<2: %d\n",2<3<2); // warning
    printf("2<3 && 3<2: %d\n", 2 < 3 && 3 < 2);
    //    printf("-3<-2<-1: %d\n",-3<-2<-1); //warning
    printf("2<3: %d\n", 2 < 3);
    //    printf("!2<3: %d\n", !2 < 3); // warning
    printf("!(2<3): %d\n", !(2 < 3));
    printf("!2: %d\n", !2);
}
