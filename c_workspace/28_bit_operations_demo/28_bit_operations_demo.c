/*
 ============================================================================
 Name        : bit-operations_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <assert.h>

void bitprint(char ch)
{
    for(int i = 0; i < 8; i++) {
        if(ch & 0x80) { // check meest linkse bit
            putchar('1');
        } else {
            putchar('0');
        }
        ch <<= 1; // schuif 1 positie naar links
    }
    putchar('\n');
}

char set_bit(char ch, int n)
{
    assert(0 <= n && n < 8);
    return ch | (1 << n);
}

char unset_bit(char ch, int n)
{
    assert(0 <= n && n < 8);
    return ch & ~(1 << n);
}

char toggle_bit(char ch, int n)
{
    assert(0 <= n && n < 8);
    return ch ^ (1 << n);
}

char reverse(char ch)
{
    char result = 0;
    if(ch & 1) {     // ga na of meest rechtse bit 1 is
        result |= 1; // geef de meest rechtse bit van result de waarde 1
    }
    for(int i = 0; i < 7; i++) {
        result <<= 1;    // verschuif result 1 positie naar links
        ch >>= 1;        // verschuif bits 1 positie naar rechts
        if(ch & 1) {     // ga na of meest rechtse bit 1 is
            result |= 1; // geef de meest rechtse bit van result de waarde 1
        }
    }
    return result;
}

int main(void)
{
    printf("(char)0xeb: ");
    bitprint((char)0xeb);
    printf("(char)0xeb >> 3: ");
    bitprint((char)0xeb >> 3);
    printf("(unsigned char)0xeb >> 3: ");
    bitprint((unsigned char)0xeb >> 3);
    putchar('\n');

    char ch = 1;
    printf("ch: ");
    bitprint(ch);
    putchar('\n');

    puts("char ch <<1 (7x)");
    for(int i = 0; i < 7; i++) {
        ch <<= 1;
        bitprint(ch);
    }
    putchar('\n');

    puts("char ch >>1 (7x)");
    for(int i = 0; i < 7; i++) {
        ch >>= 1;
        bitprint(ch);
    }
    putchar('\n');

    unsigned char ch2 = 1;
    printf("ch2: ");
    bitprint(ch2);
    putchar('\n');

    puts("unsigned char ch2 <<1 (7x)");
    for(int i = 0; i < 7; i++) {
        ch2 <<= 1;
        bitprint(ch2);
    }
    putchar('\n');

    puts("unsigned char ch2 >>1 (7x)");
    for(int i = 0; i < 7; i++) {
        ch2 >>= 1;
        bitprint(ch2);
    }
    putchar('\n');

    printf("~0: ");
    bitprint(~0);
    putchar('\n');

    ch = 0;
    bitprint(ch);
    putchar('\n');

    puts("set bit (0-7)");
    for(int i = 0; i < 8; i++) {
        ch = set_bit(ch, i);
        bitprint(ch);
    }
    putchar('\n');

    puts("unset bit (0-7)");
    for(int i = 0; i < 8; i++) {
        ch = unset_bit(ch, i);
        bitprint(ch);
    }
    putchar('\n');

    puts("toggle bit twice (0-7)");
    for(int i = 0; i < 8; i++) {
        ch = toggle_bit(ch, i);
        bitprint(ch);
        ch = toggle_bit(ch, i);
        bitprint(ch);
    }
    putchar('\n');

    ch = (char)0xf3;
    printf("ch: ");
    bitprint(ch);
    printf("ch reversed: ");
    bitprint(reverse(ch));

    printf("a: ");
    bitprint('a');

    printf("A: ");
    bitprint('A');

    printf("z: ");
    bitprint('z');

    printf("Z: ");
    bitprint('Z');
}
