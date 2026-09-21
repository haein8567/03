#include <stdio.h>

int main(void) {
    char ch;

    printf("enter a character: ");
    scanf("%c", &ch);

    printf("the next character of %c is %c\n", ch, ch + 1);

    return 0;
}
