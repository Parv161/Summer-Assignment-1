#include <stdio.h>
int FiboSeries(int n){
    if(n <= 0) {
        printf("Please enter a positive number \n");
        return ;
    } 
    long long a=0,b=1;
    for(int i=1;i<=n;i++){
        printf(" %lld ",a);
        long long c = a + b;
        a=b;
        b=c;
    }
    return n-1 ;
}

int main() {
    int n;
    printf("Enter the amount of numbers you want in your Fibonacci series :");
    if (scanf("%d",&n) != 1) {
        printf("Invalid Input. \n");
        return 1;
    }
    FiboSeries(n);
    return 0;
}