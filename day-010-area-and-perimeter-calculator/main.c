#include <stdio.h>

int main(){

float side, base, height, widht, area, perimeter;
int shape;


    printf("\n=====--Area And Perimeter Calculator--=====\n\n");

    printf("1 - Square\n");
    printf("2 - Rectangle\n");
    printf("3 - Triangle\n");
    printf("\nChoose A Shape: ");
    scanf("%d", &shape);

    printf("\n-------------------------------------------\n");

    switch(shape){
        case 1:
            printf("\nEnter The Side Of The Square: ");
            scanf("%f", &side);     
                area = side * side;
                perimeter = 4 * side;
            break;
        case 2:
            printf("\nEnter The Widht: ");
            scanf("%f", &widht);
            printf("\nEnter The Height: ");
            scanf("%f", &height);
                area = widht * height;
                perimeter = 2 * (widht + height);
            break;
        case 3:
            printf("\nEnter The Base: ");
            scanf("%f", &base);
            printf("\nEnter The Height: ");
            scanf("%f", &height);
                area = (base * height) / 2;
            break;
    }

    if(shape >= 1 && shape <= 3){
        printf("\n================--Results--================\n\n");
        
        printf("Area     : %.2f\n", area);
        printf("Perimeter: %.2f\n", perimeter);

        printf("\n===========================================\n");
    }
    return 0;
}