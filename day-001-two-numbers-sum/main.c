#include <stdio.h>

int main(){

// Variable declarations
float number1;
float number2;
float sum;

    // Display program header 
    printf("=======================\n");
    printf("=== Two numbers sum ===\n");
    printf("=======================\n");
    printf("\n");

    //reading the first number
    printf("Enter first number : ");
    scanf("%f", &number1);

    //reading the second number
    printf("Enter second number: ");
    scanf("%f", &number2);

    // Calculate the sum
    sum = number1 + number2;

    // Display the result
    printf("\n");
    printf("The sum is: %.2f", sum);
    printf("\n\n");

    //End of the program
    printf("Exiting...\n");


return 0;
}