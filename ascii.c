#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");

    // Reads a char input from the user
    scanf("%c", &c);

    // Note, %d -> integer value of a character
    // whereas %c displays the actual character
    printf("ASCII value of %c = %d\n", c, c);
    return 0;
}
