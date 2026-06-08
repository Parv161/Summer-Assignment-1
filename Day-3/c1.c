#include <stdio.h>
#include <math.h>
int main (){
    int n,remainder = 1;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = sqrt(n);
    if(n==1 || n==0) printf("Number is neither prime nor composite");
    else {
    for(int i=2;i<a;i++){
        remainder = n % i;
        if (remainder ==0) break;
    }
    if(remainder != 0)printf("Number is prime");
    else printf("Number is not prime");
    }
    return 0;
}