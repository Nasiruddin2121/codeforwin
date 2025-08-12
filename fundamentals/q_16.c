#include <stdio.h>
#include <math.h>

int main() {
    int ban,eng,islam,math,science,total,average;
    float percentage;
    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d",&ban,&eng,&islam,&math,&science);
    total=(ban+eng+islam+math+science);
    printf("Total = %d \n",total);
    average=total/5;
    printf("Average = %d \n",average);
    percentage=((float)total / 500)*100;
    printf("Percentage = %.2f \n",percentage);
    return 0;
}