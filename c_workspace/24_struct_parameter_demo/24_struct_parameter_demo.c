/*
 ============================================================================
 Name        : struct_parameter_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

typedef struct {
    double x;
    double y;
} Point;

void show_point(Point p)
{
    printf("(%.2f,%.2f)", p.x, p.y);
}

Point rotate_90_degree_clockwise1(Point p)
{ // p wordt niet gewijzigd
    Point q = { p.y, -p.x };
    return q;
}

void rotate_90_degree_clockwise2(Point* pp)
{                     // *pp wordt gewijzigd
    double x = pp->x; // "pp->x" is een andere notatie voor "(*pp).x"
    double y = pp->y;
    pp->x = y;
    pp->y = -x;
}

int main(void)
{
    Point p = { 3.0, 4.0 };
    printf("p: ");
    show_point(p);
    putchar('\n');

    Point q = rotate_90_degree_clockwise1(p); // p wordt niet gewijzigd
    printf("q: ");
    show_point(q);
    putchar('\n');
    
    p = rotate_90_degree_clockwise1(p);  // p wordt gewijzigd
    printf("p rotated: ");
    show_point(p);
    putchar('\n');
    
    rotate_90_degree_clockwise2(&p); // p wordt gewijzigd
    printf("p twice rotated: ");
    show_point(p);
    putchar('\n');
}
