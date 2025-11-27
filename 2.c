#include<stdio.h>
char ReverseOfString(char[]);

int main()
{

    char str1[100],*revstr;
    printf(" Enter string: ");
    scanf("%s",str1);
    revstr = ReverseOfString(str1);//call the function ReverseOfString

    printf(" The reversed string is: %s\n\n",revstr);
    return 0;
}
char ReverseOfString(char str1[])
{
    static int i=0;
    static char revstr[100];
    if(str1)
    {
         ReverseOfString(str1+1);
         revstr[i++] = *str1;
    }
    return revstr;
}