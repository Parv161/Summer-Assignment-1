#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percent;

    printf("Student Name: ");
    scanf("%s", name);

    printf("Enter five subject marks:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percent = total / 5.0;

    printf("\nName : %s\n", name);
    printf("Total : %d\n", total);
    printf("Percentage : %.2f\n", percent);

    if (percent >= 90)
        printf("Grade : A");
    else if (percent >= 75)
        printf("Grade : B");
    else if (percent >= 60)
        printf("Grade : C");
    else if (percent >= 40)
        printf("Grade : D");
    else
        printf("Grade : F");

    return 0;
}