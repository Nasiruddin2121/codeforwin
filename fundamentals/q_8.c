#include <stdio.h>

int main() {
    //F=(c*9/5)+32;
    int c,res;
    printf("Enter Temperature celsius : ");
    scanf("%d",&c);
     res=(c*9/5)+32;
     printf("Temperature in fahrenheit = %d F",res);
    return 0;
}