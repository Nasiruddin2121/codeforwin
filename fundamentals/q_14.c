#include <stdio.h>
#include <math.h>

int main() {
    int base, height, area;
    printf("Enter base of the triangle: ");
    scanf("%d", &base);
    printf("Enter height of the triangle: ");   
    scanf("%d", &height);
    area = (base * height) / 2;
    printf("Area of the triangle = %d sq. units\n", area);
    return 0;
}