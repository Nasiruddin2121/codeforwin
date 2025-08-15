#include <stdio.h>

int main() {
    int first_num,second_num;
    printf("Input first number: ");
    scanf("%d",&first_num);
    printf("Input second number: ");
    scanf("%d",&second_num);
    (first_num>second_num)?printf("Maximum: %d",first_num):printf("Maximum: %d",second_num);
    return 0;
}