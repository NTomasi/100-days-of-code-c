#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0;
    int consonants = 0;

    printf("\n======--Vowel And Consonant Counter--======\n\n");

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("\n-------------------Result------------------\n\n");

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    printf("\n===========================================\n");

    return 0;
}