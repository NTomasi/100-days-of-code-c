#include <stdio.h>

int main(){

int first = 0, second = 1, result, number, i;

    printf("\n======--Fibonacci Sequence--======\n\n");

    printf("\nEnter The Number Of Therms: ");
    scanf("%d", &number);

    printf("\n--------------Result--------------\n\n");

    for(i = 1; i <= number; i++){
        printf("%d\n", first);
        result = first + second;
        first = second;
        second = result;
    }

    printf("\n==================================\n");

    return 0;
}