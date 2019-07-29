#include <stdio.h>
int main()
{
    double firstNumber, secondNumber, product;

    printf("Enter two numbers:");

    // Stores two floating point numbers in variable firstNumber && secondNumber
    scanf("%lf %lf", &firstNumber, &secondNumber);

    // Performs multiplication and stores the result in product
    product = firstNumber * secondNumber;

    // Format result to two decimal places
    printf("Product = %.2lf\n", product);
    return 0;
}
