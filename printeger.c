#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");

    // Read in STDIN and format value
    scanf("%d", &number);

    // printf() the thing
    printf("You entered: %d \n", number);
    return 0;
}
