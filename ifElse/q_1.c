#include <stdio.h>

int main() {
    int num1,num2;
    printf("Input number1: ");
    scanf("%d",&num1);
    printf("Input number2: ");
    scanf("%d",&num2);
    if(num1<num2){
        printf("Input number2 is max: %d",num2);
    }else{
        printf("Input number1 is max: %d",num1);
    }
    return 0;
}