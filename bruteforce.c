/* BruteForce Algorithm implementation to determine if a number is prime or not

PROGRAM START
READ input for a positive whole number n
DECLARE a variable a and assign a boolean value, a = 1
if n == 0
    tnen a = 0
else if n == 1 or 2
    then a = 1
else 
    for i = 2 to (n - 1)
        if n % i == 0
        then a = 0
        STOP
if a = 0
      PRINT "This number is not a prime number"
else if a = 1
  PRINT "This number is a prime number"
PROGRAM END

*/
#include <stdio.h>

int primeNumber(int a_number)
{
    if (a_number == 0)
        return 0;
    if (a_number == 1 || a_number == 2)
        return 1;
    for (int i = 2; i < a_number; i++)
    {
        if (a_number % i == 0)
            return 0;
    }
    return 1;
}

void main()
{
    int a_numberr;

    printf("Enter a positive whole number: ");
    scanf("%d", &a_numberr);
    
    int isPrime = primeNumber(a_numberr);

    if (isPrime == 1)
        printf("%d is a Prime Number", a_numberr);
    else
        printf("%d is NOT a Prime Number", a_numberr);
}
