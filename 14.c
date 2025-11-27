#include <stdio.h>
#include <time.h>
int main() {
    FILE *fp;
    fp = fopen("log.txt", "a");
    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);
    fprintf(fp, "Program executed at: %s", asctime(tm_info));
    fclose(fp);
    printf("Timestamp appended successfully.\n");
    return 0;
}
