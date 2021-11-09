// Euclidean Algorithm implementation to find Highest Common Factor of two positive whole numbers.

/* ######Euclidean Algorithm->Pseudocode######

PROGRAM START
READ input for two numbers x and y
if y == 0
    PRINT x
else if y > x
    swap the numbers using a temporary variable  
    PRINT theGcd  
else if x >= y and y > 0
    PRINT theGcd
else 
    PRINT "INVALID INPUT"

SET theGcd = FUNCTION gcd(x:integer,y:integer)
    PRINT (y, (x % y))
PROGRAM END

*/

#include<stdio.h>
int gcd(int firstNumber, int secondNumber)
{
    if (secondNumber == 0){
        return firstNumber;
    }else if ( firstNumber >= secondNumber && secondNumber > 0){
        return gcd(secondNumber, (firstNumber % secondNumber));
    }
}

int main()
{
    int number1;
    int number2;
    int temporaryVariable;
    int yourgcd;

    printf("Enter your first number: ");
    scanf("%d", &number1);
    printf("Enter your second number: ");
    scanf("%d", &number2);

    if(number2 > number1){

        temporaryVariable = number1;
        number1 = number2;
        number2 = temporaryVariable;
        
    }

    yourgcd = gcd(number1, number2);

    if(yourgcd){
  
        temporaryVariable = number2;
        number2 = number1;
        number1 = temporaryVariable;
        
        printf("The GCD of %d and %d is %d", number1, number2, yourgcd);
    } else {
        printf("Invalid input");
        return 0;
    }
}