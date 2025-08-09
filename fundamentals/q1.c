#include <stdio.h>

int main() {
    printf("Enter a character:");
    char ch;
    scanf("%c",&ch);
    printf("you entered character:%c \n",ch);
    printf("Enter a signed short value: ");
    short num;
    scanf("%hd",&num);
    printf("You entered signed short: %hd",num);
    return 0;
}