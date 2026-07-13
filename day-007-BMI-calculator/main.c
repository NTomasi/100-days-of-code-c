#include <stdio.h>

int main(){

float height, weight, bmi;

    printf("=======--BMI Calculator--=======\n\n");

    printf("Type Your Height (mts): ");
    scanf("%f", &height);

    printf("Type Your Weight (kg): ");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("\nBMI: %.2f\n", bmi);

    if(bmi < 18.5){
        printf("\nUnderweight!");
    }
    else if(bmi > 18.5 && bmi < 24.9){
        printf("\nNormal Weight!");
    }
    else if(bmi > 25 && bmi < 29.9){
        printf("\nOverweight!");
    }
    else if(bmi > 30 && bmi < 34.9){
        printf("\nObesity class I!");
    }
    else if(bmi > 35 && bmi < 39.9){
        printf("\nObesity class II!");
    }
    else if(bmi >= 40){
        printf("\nObesity class III!");
    }
    
    printf("\n\n================================\n");



    return 0;
}