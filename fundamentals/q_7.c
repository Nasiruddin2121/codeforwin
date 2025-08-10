#include <stdio.h>
#include <math.h>

int main() {
    float centimeter,meter,kilometer;
    printf("Enter length in centimeter: ");
    scanf("%f",&centimeter);
    meter=centimeter/100;
    printf("Length in meter = %f m \n",meter);
    kilometer=centimeter/100000;
    printf("Length in kilometer = %.2f km",kilometer);
    return 0;
}