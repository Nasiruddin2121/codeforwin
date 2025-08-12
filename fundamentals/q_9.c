#include <stdio.h>

int main() {
    //c=(f-32)*5/9;
    float fahrenheit,res;
    printf("Temperature in Fahrenheit : ");
    scanf("%f",&fahrenheit);
    res=(fahrenheit-32)*5/9;
    printf("Temperature in celsius = %.2f C",res);
    return 0;
}