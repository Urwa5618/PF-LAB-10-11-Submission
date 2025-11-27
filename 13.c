#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }
    fclose(fp);
    fp = fopen("data.txt", "r");
    fseek(fp, 0, SEEK_END);  
    if (ftell(fp) == 0)
        printf("File is now empty.\n");
    else
        printf("File is NOT empty.\n");
    fclose(fp);
    return 0;
}
