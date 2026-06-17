#include <stdio.h>
int Sum(int a,int b){
    return a + b;
}
int main() {
    int a ,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("The sum of the two numbers is : %d",Sum(a,b));
    return 0;
}