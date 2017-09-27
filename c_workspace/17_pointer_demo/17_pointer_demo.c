/*
 ============================================================================
 Name        : pointer_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 17, j = 27, k = 37;
    printf("i: %d\n", i);
    int* pi = &i;
    *pi += 1;
    printf("i: %d\n", i);
    printf("&i: %p, &j: %p, &k: %p\n", &i, &j, &k);

    int a[] = { 100, 101, 102 };

    printf("a: %p\n", a);
    printf("&a[0]: %p\n", &a[0]);
    printf("&a[1]: %p\n", &a[1]);
    printf("&a[2]: %p\n", &a[2]);
    printf("a+2: %p\n", a + 2);
    printf("&a[3]: %p\n", &a[3]); // out of range

    for(int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');

    int* p = a;

    for(int i = 0; i < 3; i++) {
        printf("%d ", *p);
        p++;
    }
    putchar('\n');

    for(int i = 0; i < 3; i++) {
        printf("%p \n", p);
        p++;
    }

    char s1[] = "voorbeeld";
    char s2[strlen(s1) + 1];
    /*    for (i=0; i<strlen(s1)+1; i++)
     {
     s2[i]=s1[i];
     }
     puts(s1);
     puts(s2);
     */
    char* p1 = s1;
    char* p2 = s2;
    /*    while(*p2 != '\0')
     {
     *p2 = *p1;
     p1++;
     p2++;
     }

     puts(s1);
     puts(s2);
     */
    p1 = s1;
    p2 = s2;
    while((*p2++ = *p1++) != '\0')
        ;

    puts(s1);
    puts(s2);

    //    char b[] = "string5";
    char b[] = { 's', 't', 'r', 'i', 'n', 'g', '5', '\0' };
    const char* q = "string5";
    b[3] = 'o';
    //    q[3] = 'o';
    puts(b);
    puts(q);

    // q1 en q2 hebben hetzelfde adres (implementatie-afhankelijk)
    // q1 en q2 wijzen naar dezelfde "string literal"
    char* q1 = "test";
    char* q2 = "test";
    printf("q1: %p\n", q1);
    printf("q2: %p\n", q2);

    // q1 en q2 hebben verschillend adres
    char q3[] = "test";
    char q4[] = "test";
    printf("q3: %p\n", q3);
    printf("q4: %p\n", q4);

    j = 1 + 2 * 256 + 3 * 256 * 256 + 4 * 256 * 256 * 256;
    char* s = (char*)&j;
    printf("j: %#x\n", j);
    printf("&j: %p\n", &j);

    for(int i = 0; i < 4; i++) {
        printf("%p ", &s[i]);
    }
    putchar('\n');

    for(int i = 0; i < 4; i++) {
        printf("%d ", s[i]);
    }
    putchar('\n');
}
