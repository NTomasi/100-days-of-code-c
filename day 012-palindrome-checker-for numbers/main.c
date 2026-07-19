#include <stdio.h>

int main(){

int number, quotient, remainder, result = 0;

    printf("\n====-Palindrome Checker For Numbers-====\n\n");

    printf("Enter The Number: ");
    scanf("%d", &number);

    quotient = number;

    while(quotient != 0){
        remainder = quotient % 10;
        result = result * 10 + remainder;
        quotient = quotient / 10;
    }

    printf("\n-----------------Result-----------------\n");

    if(result == number){
        printf("\nIts A Palindrome!");
    }
    else{
        printf("\nIts NOT A Palindrome!");
    }

    printf("\n\n========================================\n");

    return 0;
}