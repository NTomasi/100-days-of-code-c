#include <stdio.h>

int main(){

    float number1;
    float number2;
    float result;

    int operation;

    char option;
    
do{

    printf("================================\n");
    printf("======= Basic Calculator =======\n");
    printf("================================\n");
    printf("\n");

do {
    printf("Choose an operation:\n\n");
    printf("1 - Sum\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n\n");
    printf("Operation: ");

    scanf("%d", &operation);

    if (operation < 1 || operation > 4) {
        printf("\n\nWrong! Type a number between 1 and 4!\n\n");
    }

} while (operation < 1 || operation > 4);

    printf("\n");

    printf("First Number : ");
    scanf("%f", &number1);

    printf("Second Number: ");
    scanf("%f", &number2);

    switch(operation){
        case 1:
            result = number1 + number2;
            break;
        case 2:
            result = number1 - number2;
            break;
        case 3:
            result = number1 * number2;
            break;
        case 4:
            if(number2 == 0){
                printf("ERROR! Division by zero is not allowed.\n");
                return 1;
            }
            result = number1 / number2;
            break;

    }
    printf("\n"); 

    printf("Result: %.3f", result);
    printf("\n\n");

    printf("Do you want another calculation? (Y/N): ");
    scanf(" %c", &option);
    }
    
while(option == 'Y' || option == 'y');

return 0;
}