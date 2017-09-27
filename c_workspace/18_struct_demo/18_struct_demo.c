/*
 ============================================================================
 Name        : struct_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

struct art {
    int code;
    char naam[20];
    int voorraad;
};

typedef struct {
    int code;
    char naam[20];
    int voorraad;
} Artikel;

typedef Artikel* PArtikel;

typedef struct {
    int i, j;
    char c;
} Structvb1;

typedef struct {
    int i, j;
    char c1, c2, c3, c4;
} Structvb2;

int main(void)
{

    Artikel artikel1;
    artikel1.code = 1234;
    strcpy(artikel1.naam, "soldeerbout");
    artikel1.voorraad = 12;
    printf("Voorraad van artikel %d (%s) is %d\n", artikel1.code, artikel1.naam, artikel1.voorraad);

    Artikel artikel2 = { 5555, "nijptang", 14 };
    printf("Voorraad van artikel %d (%s) is %d\n", artikel2.code, artikel2.naam, artikel2.voorraad);

    // in struct-opslag kunnen gaten voorkomen

    printf("sizeof(Structvb1): %d\n", sizeof(Structvb1));
    printf("sizeof(Structvb2): %d\n", sizeof(Structvb2));

    // pointer naar struct

    //	Artikel *part = &artikel1;
    PArtikel part = &artikel1;
    printf("Voorraad van artikel %d (%s) is %d\n", part->code, part->naam, part->voorraad);
}
