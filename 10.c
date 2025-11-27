#include <stdio.h>
#include <string.h>

int isPalindrome(char s[]) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j]) return 0;
        i++; j--;
    }
    return 1;
}

int main() {
    char words[5][20];
    
    printf("Enter 5 words:\n");
    for(int i=0;i<5;i++)
        scanf("%s", words[i]);

    for(int i=0;i<5;i++) {
        if (isPalindrome(words[i]))
            printf("%s → Palindrome\n", words[i]);
        else
            printf("%s → Not Palindrome\n", words[i]);
    }
}
