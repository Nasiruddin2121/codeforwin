#include <stdio.h>

int main() {
    char ch;
    printf("Input number: ");
    scanf("%c",&ch);
    (ch>'A'&& ch<'Z' || ch>'a' && ch<'z')?printf("It is ALPHABET"):printf("It is not ALPHABET");
    return 0;
}