#include <stdio.h>
#include <math.h>
int countDigits(int n){
    if(n<10)
        return 1;

    return 1 + countDigits(n / 10);
}
int ArmsNum(int n){
    int original = n;
    int m=0,reverse=0;
    for (int i=0;n>0;i++){
        m = n%10;
        n = n/10;
        reverse = reverse + pow(m,countDigits(original));
    }
    return original == reverse;
}
int main() {
    int n = 0;
    printf("Enter a number : ");    
    scanf("%d",&n);
    if (ArmsNum(n))
        printf("%d is an armstrong number. \n",n);
    else
        printf("%d is not an armstrong number. \n",n);
    return 0;
}