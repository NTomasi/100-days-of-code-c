#include <stdio.h>

int main(){

int secretNumber = 51;
int number;
int attempts = 0;

    printf("=====--Number Guessing Game--=====\n\n");
    
    while(number != secretNumber){

        printf("Choose A Number (1-100): ");
        scanf("%d", &number);
        attempts++;

        if(number < 1 || number > 100){
            printf("\nERROR!! Type A Number Between (1-100)!!! \n\n");
            continue;
        }
        if(number < secretNumber){
            printf("\nToo Low.\n\n");
        }
        if(number > secretNumber){
            printf("\nToo High.\n\n");
        }
    }
    printf("\n=======--CONGRATULATIONS!!!--=======\n");

    printf("\n-------You Found The Number!!-------\n\n");

    printf("The Number Was: %d\n\n", number);

    printf("Attempts: %d\n", attempts);

    printf("====================================\n");

    return 0;
}