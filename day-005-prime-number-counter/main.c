#include <stdio.h>

int main(){

int number;
int is_prime = 1;

    printf("=====--Prime Numbers Counter--=====\n\n");

    printf("Enter An Integer: ");
    scanf("%d", &number);

    if(number <= 1){
        is_prime = 0;
    }
    for(int i = 2; i * i <= number; i++){
        if(number % i == 0){
            is_prime = 0;
            break;
        }
    }
    printf("\n============--Results--============\n\n");

    if(is_prime){
        printf("%d IS A Prime Number!\n", number);
    } else {
        printf("%d Is NOT A Prime Number!\n", number);
    }

    printf("\n===================================");
    return 0;
}