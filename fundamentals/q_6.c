#include <stdio.h>
#include <math.h>

int main() {
    int radius,diameter,circumference,area;
    printf("Enter radius: ");
    scanf("%d",&radius);
    diameter=2*radius;
    printf("Diameter : %d units \n",diameter);
    circumference=3.14*2*10;
    printf("Circumference : %d units \n",circumference);
    area = 3.14 * pow(radius, 2);
    printf("Area %d sq. units",area);
    
    return 0;
}