#include <stdio.h> 
long long int Fact(int n){
    if (n==0 || n==1){
        return 1LL;
    }
    else {
        return (long long int)n*Fact(n-1) ;
    }
}
int main() {
    int n;
    long long int w;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n<0) printf("Enter a positive number. \n");
    else if (n>20) printf("Enter a smaller number. \n");
    else {
        w = Fact(n);
        printf("Factorial of %d is %lld. \n",n,w);
    } 
    return 0;
}