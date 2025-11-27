#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n')
            lines++;
        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }
    fclose(fp);
    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);
    return 0;
}
