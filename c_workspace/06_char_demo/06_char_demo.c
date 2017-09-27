/*
 ============================================================================
 Name        : char_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("a: %c\n", 'a');
    printf("a: %c\n", 97);

    printf("ASCII-waarde van a: %d\n", 'a');

    printf("'c'-'a': %d\n", 'c' - 'a');

    printf("'#'+'#': %c\n", '#' + '#');

    char ch = 'a';

    printf("sizeof(ch): %d\n", sizeof(ch));
    // karakter-constanten hebben size 4
    printf("sizeof('a'): %d\n", sizeof('a'));
    // karakter-expressies zijn in feite int-expressies en hebben size 4
    printf("sizeof(ch+ch): %d\n", sizeof(ch + ch));

    /*  Bepaal unicode-waarde van 'π'
    Python, IDLE:

        >>> hex(ord("π"))
        '0x3c0'
    */

    printf("\u03C0");
    puts("");
    printf("π"); // Settings -> Preferences -> Misc -> File font encoding: UTF-8
                 // Uitvoer: Settings -> Preferences -> Terminal -> use built-in ...
    puts("");
    printf("%d\n", strlen("\u03C0")); // voeg toe: #include <string.h>
                                      // aantal bytes van 'π'
    unsigned char s[] = "\u03C0";     // toon de afzonderlijke bytes van 'π'
    printf("%#x %#x", s[0], s[1]);
}
