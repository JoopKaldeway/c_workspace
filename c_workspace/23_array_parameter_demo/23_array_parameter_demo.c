/*
 ============================================================================
 Name        : array_parameter_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

void show_array(int a[], int n)
{
    // void show_array(int* a,int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void swap(int a[], int i, int j)
{
    // void swap(int* a,int i,int j) {
    int h = a[i];
    a[i] = a[j];
    a[j] = h;
}

int main(void)
{
    int a[] = { 20, 30, 40 };
    int n = sizeof(a) / sizeof(a[0]);

    printf("a: ");
    show_array(a, n);
    //    show_array(&a[0],n);
    putchar('\n');

    swap(a, 0, 1);

    printf("a: ");
    show_array(a, n);
}
