#include <stdio.h>

int main() {

    FILE *infile;
    char filename[] = "i5f9.dat";
    char ch;
    int lines = 0, words = 0, chars = 0, inWord = 0;

    infile = fopen(filename, "r");

    if (infile == NULL)
    printf("Can't open %s\n", "i5f9.dat");

    while ((ch = fgetc(infile)) != EOF) {

        chars++;

        if (ch == '\n') {

            lines++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n') {

            inWord = 0;
        }
        else if (inWord == 0) {

            inWord = 1;
            words++;
        }
    }


    fclose(infile);

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Chars: %d\n", chars);

    return 0;
}
