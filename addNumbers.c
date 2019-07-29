#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, sumOfNumbers;

    printf("Enter two integers: ");

    // Store the entered ints using scanf()
    scanf("%d %d\n", &firstNumber, &secondNumber);

    // sum of two numbers
    sumOfNumbers = firstNumber + secondNumber;

    // Displays sum
    printf("%d + %d = %d\n", firstNumber, secondNumber, sumOfNumbers);

    return 0;
}
