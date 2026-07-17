#include <stdio.h>
#include <windows.h>

int main(){

int start;

    printf("\n=====--Countdown Timer--=====\n\n");

    printf("Enter The Starting Number: ");
    scanf("%d", &start);

    if(start < 0){
        printf("\nEnter A Number Higher Than 0!!\n\n");
        return 1;
    }

    while(start != -1){
        printf("\n%d", start);
        Sleep(1000);
        start--;
    }

    printf("\n\n---------Time's Up!!---------\n\n");

    printf("=============================");




    return 0;
}