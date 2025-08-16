#include <stdio.h>

int main() {
    int year;
    printf("Input year: ");
    scanf("%d",&year);
    (year%400==0)?printf("%d is Leap year",year):(year%4==0 && year%100!=0)?printf("%d is Leap year",year):printf("%d is not Leap year",year);
    return 0;
}