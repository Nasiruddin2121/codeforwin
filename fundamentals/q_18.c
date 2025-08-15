#include <stdio.h>
#include<math.h>
int main() {
    float p,t,r,si;
    printf("Enter principle: ");
    scanf("%f",&p);
    printf("Enter time: ");
    scanf("%f",&t);
    printf("Enter rate: ");
    scanf("%f",&r);
    si=(p*(pow(1+r/100,t)));
    printf("Simple Interest = %.6f",si);
    return 0;
}