/*
 ============================================================================
 Name        : hexadecimaal_octaal_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    printf("0xff decimaal: %d\n", 0xff);
    printf("0xffff decimaal: %d\n", 0xffff);
    printf("0xffffff decimaal: %d\n", 0xffffff);
    printf("0xffffffff decimaal: %d\n", 0xffffffff);
    putchar('\n');

    printf("255 hexadecimaal: %#x\n", 255);
    printf("65535 hexadecimaal: %#x\n", 65535);
    printf("16777215 hexadecimaal: %#x\n", 16777215);
    printf("-1 hexadecimaal: %#x\n", -1);
    //	printf("-1 hexadecimaal: %#llx\n", -1);  //fout

    // -std=gnu11 : %#I64x
    // -std=c11 : %#llx
    printf("-1LL hexadecimaal: %#I64x\n", -1LL);
    putchar('\n');

    printf("077 decimaal: %d\n", 077);
    printf("63 octaal: %#o\n", 63);
    putchar('\n');

    //	printf("0xffffffff: %#I64x\n", 0xffffffff); // fout
    //	printf("0x00000000ffffffff: %#I64x\n", 0x00000000ffffffff); //fout
    printf("0x00000000ffffffffLL: %#I64x\n", 0x00000000ffffffffLL);
}
