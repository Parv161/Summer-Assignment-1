#include <stdio.h>
#include <math.h>
int countDigits(int n){
    if(n<10)
        return 1;

    return 1 + countDigits(n / 10);
}
int RevNum(int n){
    if(n<10)
        return n;
    return ((int)pow(10,countDigits(n)-1))*(n%10) + RevNum(n/10);
}
void Palindrome(int n){
    if( n == RevNum(n) ){
        printf("The number is a palindrome. \n");
    }
    else{
        printf("The number is not a palindrome. \n");
    }
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    Palindrome(n);
    return 0;
}