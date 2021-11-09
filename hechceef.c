#include <stdio.h>
int main(){
    int firstNumber;
    int secondNumber;
    int temporaryNumber;
    int i = 1;
    int gcdOfTheTwoNumbers;

    printf("Enter the first whole number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second whole number: ");
    scanf("%d", &secondNumber);

     if(secondNumber > firstNumber){

        temporaryNumber = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temporaryNumber;
        
    }

    for (; i <= secondNumber; i++){
        if (firstNumber % i==0 && secondNumber % i == 0)   
        gcdOfTheTwoNumbers = i;
    }
    return 0;
    printf("The Greatest Common Divisor of the two numbers is: %d", gcdOfTheTwoNumbers);

        // temporaryNumber = secondNumber;
        // secondNumber = firstNumber;
        // firstNumber = temporaryNumber;
        

//     if(firstNumber > secondNumber){
//         do printf("the gcd of the two numbers is: %d", i);
//         while(i<= secondNumber);
//         {
//             if ( firstNumber % i == 0 && secondNumber % i == 0)
//         }i++;
//     }
// }