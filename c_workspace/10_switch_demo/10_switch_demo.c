/*
 ============================================================================
 Name        : switch_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int cijfer = 6;

    if(cijfer <= 3)
        printf("slecht\n");
    else if(cijfer <= 5)
        printf("onvoldoende\n");
    else if(cijfer <= 7)
        printf("voldoende\n");
    else if(cijfer <= 9)
        printf("goed\n");
    else
        printf("uitstekend\n");

    switch(cijfer) {
    case 0:
    case 1:
    case 2:
        printf("slecht\n");
        break;
    case 4:
    case 5:
        printf("onvoldoende\n");
        break;
    case 6:
    case 7:
        printf("voldoende\n");
        break;
    case 8:
    case 9:
        printf("goed\n");
        break;
    default:
        printf("uitstekend\n");
    }
}
