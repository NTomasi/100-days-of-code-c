#include <stdio.h>

int main(){

int year;

    printf("\n=====--Leap Year Checker--=====\n\n");

    printf("Enter A Year: ");
    scanf("%d", &year);

    printf("\n-------------------------------\n");
    if(year % 100 == 0){
        if (year % 400 == 0){
            printf("\n%d Is A Leap Year!", year);
    } else {
        printf("\n%d Is Not A Leap Year!", year);
    }
} else {
    
    if(year % 4 == 0){
        printf("\n%d Is A Leap Year!", year);
    } else {
        printf("\n%d Is Not A Leap Year!", year);
    }
}
    printf("\n\n===============================");
    
    return 0;
}