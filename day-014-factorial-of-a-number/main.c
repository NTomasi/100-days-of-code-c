#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;

    printf("\n======--Factorial Of A Number--======\n\n");

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("\n---------------Results---------------\n");

    if (n < 0) {
        printf("\nFactorial does not exist for negative numbers.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("\nThe factorial of %d is %d\n", n, factorial);
    }
    printf("\n=====================================");
    return 0;
}