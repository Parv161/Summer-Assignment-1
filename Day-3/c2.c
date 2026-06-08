#include <stdio.h>
#include <math.h>
int main() {
    int min ,Max;
    printf("The starting value of the range is :");
    scanf("%d",&min);
    printf("The ending value of the range is :");
    scanf("%d",&Max);
    
    for(int i=min;i<=Max;i++){
        if (i<2) continue;

        int rem = 1;
        int limit = (int)sqrt(i);

        for (int j=2; j<= limit; j++) {
            rem = i%j;
            if(rem==0) break;
        }
        if (rem != 0) printf("%d\n",i);
    }
    return 0;
}