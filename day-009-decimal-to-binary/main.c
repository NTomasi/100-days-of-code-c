#include <stdio.h>

int main() {
    int number, remainder;
    int binary[32];
    int i = 0;

    printf("\n=====--Decimal To Binary--=====\n\n");

    printf("Enter A Decimal Number: ");
    scanf("%d", &number);

    printf("\n-------------------------------\n");

    if (number == 0) {
        printf("\nBinary: 0\n");
        return 0;
    }

    while (number > 0) {
        binary[i] = number % 2;
        number = number / 2;
        i++;
    }

    printf("\nBinary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    printf("\n===============================");

    return 0;
}