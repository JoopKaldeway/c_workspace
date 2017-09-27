/*
 ============================================================================
 Name        : ASCII_vs_binary_file_demo.c
 Author      : J. Kaldeway
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    FILE *out_file, *in_file;
    char* filename = "output.txt";

    out_file = fopen(filename, "w");
    fputs("een\ntwee\ndrie", out_file);
    fclose(out_file);

    in_file = fopen(filename, "rb");
    int c = fgetc(in_file);
    while(c != EOF) {
        printf("%#x ", c);
        c = fgetc(in_file);
    }
    fclose(in_file);
    putchar('\n');
    putchar('\n');

    filename = "output2.txt";
    int CTRL_Z = 0x1a;

    out_file = fopen(filename, "w");
    fputs("een\ntwee\n", out_file);
    fputc(CTRL_Z, out_file);
    fputs("drie", out_file);
    fclose(out_file);

    in_file = fopen(filename, "r");
    c = fgetc(in_file);
    while(c != EOF) {
        printf("%#x ", c);
        c = fgetc(in_file);
    }
    fclose(in_file);
    putchar('\n');
    putchar('\n');

    in_file = fopen(filename, "rb");
    c = fgetc(in_file);
    while(c != EOF) {
        printf("%#x ", c);
        c = fgetc(in_file);
    }
    fclose(in_file);
}
