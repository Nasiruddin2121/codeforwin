#include <stdio.h>
#include <math.h>

int main() {
    int base,exponent,res;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent : ");
    scanf("%d",&exponent);
    res=pow(base,exponent);
    printf("5^2 = %d",res);
    return 0;
}