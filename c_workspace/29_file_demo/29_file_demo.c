/*
 ============================================================================
 Name        : file_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main(void)
{

    FILE* out_file, *in_file;
    char* filename = "output.txt";

    out_file = fopen(filename, "w");

    fputc('v', out_file); // schrijf één karakter weg
    fputc('b', out_file);
    fputc('\n', out_file);

    fputs("een\ntwee\ndrie\n", out_file); // schrijf een string weg

    fprintf(out_file, "%d %f\n", 5, sqrt(5)); // uitvoer met format-string

    fclose(out_file);

    //===============================================

    int c;

    in_file = fopen(filename, "r");
    c = fgetc(in_file); // lees één karakter in
    printf("%c", c);
    c = fgetc(in_file);
    printf("%c", c);
    c = fgetc(in_file);
    printf("%c", c);

    char s[100]; // lees string in
    fgets(s, 100, in_file);
    printf("%s", s);
    fgets(s, 100, in_file);
    printf("%s", s);
    fgets(s, 100, in_file);
    printf("%s", s);

    int i;
    double d;
    fscanf(in_file, "%d %lf\n", &i, &d); // invoer met format-string
    printf("%d %f\n", i, d);

    fclose(in_file);
}
