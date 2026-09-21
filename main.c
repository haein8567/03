#include <stdio.h>

int main(void) {
    int numerator, denominator;
    float result;

    printf("Input the number : ");
    scanf("%d", &numerator);

    printf("Input the number : ");
    scanf("%d", &denominator);

    result = (float)numerator / denominator;

    printf("Dividing result is %f\n", result);

    return 0;
}