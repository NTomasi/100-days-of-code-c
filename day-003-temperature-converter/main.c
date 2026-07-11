#include <stdio.h>

int main(){

    float celsius;
    float fahrenheit;
    float kelvin;
    int option;
    float temperature;


    printf("\n========--Temperature Converter--========\n\n");

    printf("1 - Celsius (C)\n");
    printf("2 - Fahrenheit (F)\n");    
    printf("3 - Kelvin (K)\n");    

do{
    printf("Choose An Option: ");
    scanf(" %d", &option);

    if(option < 1 || option > 3){
        printf("Invalid Option! Choose A Number Between 1 and 3!\n\n");
    }
}
while(option < 1 || option > 3);

    printf("\nEnter The Temperature: ");
    scanf("%f", &temperature);

    if(option == 1){
        celsius    = temperature;
        fahrenheit = temperature * 1.8 + 32;
        kelvin     = temperature + 273.15;

    } else if (option == 2){
        celsius    = (temperature - 32) / 1.8;
        fahrenheit = temperature;
        kelvin     = (temperature - 32) / 1.8 + 273.15;

    } else if(option == 3){
        celsius    = temperature - 273.15;
        fahrenheit = (temperature - 273.15) * 1.8 + 32;
        kelvin     = temperature;
    }

    if(option > 0 && option < 4){
        printf("\n==================================");
        printf("\nResults: \n");
        printf("Celsius   : %.2f C\n", celsius);
        printf("Fahrenheit: %.2f F\n", fahrenheit);
        printf("Kelvin    : %.2f K\n", kelvin);
        printf("==================================");
    }
    return 0;
}