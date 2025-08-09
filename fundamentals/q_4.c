#include <stdio.h>

int main() {
    int length,width,perimeterOfRectangle;
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter width: ");
    scanf("%d",&width);
    perimeterOfRectangle=2*(length+width);
    printf("Perimeter of Rectangle = %d units",perimeterOfRectangle);
    return 0;
} 