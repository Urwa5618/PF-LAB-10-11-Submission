#include <stdio.h>
int Sumdigits(int n);
int main (){
    int n,Sum;
    scanf("%d",&n);
    Sum = Sumdigits(n);
    printf("Sum of digits %d is: %d",n,Sum);
    return 0;
}
int Sumdigits(int n){
    if (n==0){return 0;}
    return ((n%10) + Sumdigits(n/10));
}