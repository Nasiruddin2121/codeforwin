
#include <stdio.h>

int main() {
    int days,years,week;
    printf("Enter days :");
    scanf("%d",&days);
    years=days/365;
    week=(days-(years*365))/7;
    printf("373 days = %d year/s, %d week/s and %d day/s",years,week,days);
    return 0;
}