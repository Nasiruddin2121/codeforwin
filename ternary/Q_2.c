#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Input num1: ");
    scanf("%d",&num1);
    printf("Input num2: ");
    scanf("%d",&num2);
    printf("Input num3: ");
    scanf("%d",&num3);
    (num1>num2 && num1>num3)?printf("Maximum is num1 : %d",num1):(num2>num3)?printf("Maximum is num2: %d",num2):printf("Maximum in num3: %d",num3);
    return 0;
}