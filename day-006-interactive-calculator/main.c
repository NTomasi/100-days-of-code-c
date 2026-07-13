#include <stdio.h>

int main(){

int number;

    printf("=====--Tabuada Interativa--=====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &number);

    printf("\nTabuada do %d:\n\n", number);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}