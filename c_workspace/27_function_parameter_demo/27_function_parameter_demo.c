/*
 ============================================================================
 Name        : pointer_to_function_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <assert.h>

typedef double (*Function)(double); // Function is een pointer-type

double f(double x)
{
    return x * x - 2;
}

double g(double x)
{
    return x * x - 3;
}

double bepaal_nulpunt(Function f, double a, double b)
{
    assert(f(a) * f(b) < 0);
    while(b - a > 1.0e-10) {
        double mid = (a + b) / 2;
        if(f(mid) * f(a) > 0) { // f(mid) en f(a) hebben hetzelfde teken
            a = mid;
        } else {
            b = mid;
        }
        printf("a: %.10f, b: %.10f\n", a, b);
    }
    return a;
}

int main(void)
{
    double x = bepaal_nulpunt(f, 1.0, 2.0);
    printf("nulpunt f: %.10f\n", x);

    x = bepaal_nulpunt(g, 1.0, 2.0);
    printf("nulpunt g: %.10f\n", x);
}
