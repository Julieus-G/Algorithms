/* Using Divide and Conquer to find Exponenation.

PROGRAM START
READ input for two numbers a and b
if  b == 0
    PRINT "The nth power of the integer is: 1"
else if b == 1
    PRINT "The nth power of the integer is: a"
else if b > 1
    PRINT z

SET z = exponential(a:integer, b:integer)
if b % 2 == 0
    PRINT (exponential(a, b/2) * exponential(a, b/2)
else if 
    PRINT (exponential(a, b/2 + 1) * exponential(a, b/2)
*/
#include <stdio.h>

int power(int baseNumber, unsigned int exponentNumber)
{
    if (exponentNumber == 0)
        return 1;
    else if (exponentNumber == 1)
        return baseNumber;
    else if (exponentNumber % 2 == 0)
        return (power(baseNumber, exponentNumber / 2) * power(baseNumber, exponentNumber / 2));
    else
        return (power(baseNumber, (exponentNumber / 2) + 1)) * power(baseNumber, exponentNumber / 2);
}

int main()
{
    int baseNumber;
    int exponentNumber;
    printf("Enter an integer: ");
    scanf("%d", &baseNumber);
    printf("Enter an unsigned integer: ");
    scanf("%i", &exponentNumber);

    printf("The nth power of the integer is: %d", power(baseNumber, exponentNumber));
    return 0;
}