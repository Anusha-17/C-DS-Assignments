#include <stdio.h>
void main()
{
    int num1, num2;
    int result;
    float result1;
    num1 = 10;
    num2 = 5;
    result = num1 + num2;
    printf("\nAddition of %d and %d is = %d", num1, num2, result);
    result = num1 - num2;
    printf("\nSubtraction of %d and %d is = %d", num1, num2, result);
    result = num1 * num2;
    printf("\nMultiplication of %d and %d is = %d", num1, num2, result);
    result1 = (float)num1 / (float)num2;
    printf("\nQuotient dividing %d by %d is  = %f", num1, num2, result1);
    result = num1 % num2;
    printf("\nRemainder dividing %d by %d is  = %d", num1, num2, result);
}
