#include <stdio.h>

int main() {
    int num1,num2,num3;
    printf("Input number1: ");
    scanf("%d",&num1);
    printf("Input number2: ");
    scanf("%d",&num2);
    printf("Input number3: ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("Input number2 is max: %d",num1);
    }else if(num1<num2 && num2>num3){
        printf("Input number2 is max: %d",num2);
    }else{
        printf("Input number3 is max: %d",num3);
    }
    return 0;
}