#include <stdio.h>
#include <math.h>

int main() {
    int total_angle,first_angle,second_angle,third_angle,res;
    printf("Enter total angle: ");
    scanf("%d",&total_angle);
    printf("Enter first angle: ");
    scanf("%d",&first_angle);
    printf("Enter second angle: ");
    scanf("%d",&second_angle);
    res=total_angle-(first_angle+second_angle);
    printf("Third angle = %d",res);
    return 0;
}