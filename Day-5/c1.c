int sumofDivisors(int n){
    int a , count = 1;
    for (int i = 2;i<n;i++){
        if (n%i == 0) count = count + i;
    }
    return count ;
}
#include <stdio.h>
int main() {
    int n ,a =0;
    printf("Enter a number :");
    scanf("%d",&n);
    a = sumofDivisors(n);
    if(n == a) printf("%d is a perfect number. \n",n);
    else printf("%d is not a perfect number. \n",n);
    return 0;
}