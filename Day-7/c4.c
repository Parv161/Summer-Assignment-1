#include <stdio.h>
#include <math.h>
int countDigits(int n)
{
    if(n<10)
        return 1;

    return 1 + countDigits(n / 10);
}
int RevNum(int n){
    if(n<10)
        return n;
    return ((int)pow(10,countDigits(n)-1))*(n%10) + RevNum(n/10);
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n<0)
        n = -n;
    printf("The reversed number is %d. \n",RevNum(n));
    return 0;
}