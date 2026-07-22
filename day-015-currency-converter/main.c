#include <stdio.h>

int main() {
    double amount, result;
    int option;


    printf("======--CURRENCY CONVERTER--======\n");
    printf("1. BRL -> USD\n");
    printf("2. USD -> BRL\n");
    printf("3. BRL -> EUR\n");
    printf("4. EUR -> BRL\n");
    printf("5. USD -> EUR\n");
    printf("6. EUR -> USD\n");
    printf("==================================\n");

    printf("Choose an option: ");
    scanf("%d", &option);

    printf("Enter the amount: ");
    scanf("%lf", &amount);

    printf("\n--------------Results-------------\n");

    switch(option) {
        case 1:
            result = amount / 5.40;
            printf("\nR$ %.2lf = US$ %.2lf\n", amount, result);
            break;

        case 2:
            result = amount * 5.40;
            printf("\nUS$ %.2lf = R$ %.2lf\n", amount, result);
            break;

        case 3:
            result = amount / 6.30;
            printf("\nR$ %.2lf = EUR %.2lf\n", amount, result);
            break;

        case 4:
            result = amount * 6.30;
            printf("\nEUR %.2lf = R$ %.2lf\n", amount, result);
            break;

        case 5:
            result = amount * 0.86;
            printf("\nUS$ %.2lf = EUR %.2lf\n", amount, result);
            break;

        case 6:
            result = amount / 0.86;
            printf("\nEUR %.2lf = US$ %.2lf\n", amount, result);
            break;

        default:
            printf("\nInvalid option!\n");
    }

    printf("\n==================================\n");
    return 0;
}