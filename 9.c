#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter a number to display the corresponding day of the week\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 3:
        printf("Wednessday\n");
        break;
        case 4:
        printf("Thusday\n");
        break;
        case 5:
        printf("Friday\n");
        break;
        case 6:
        printf("Saturday\n");
        break;
        case 7:
        printf("Sunday\n");
        break;
        default:
        printf("Invalid Input!\n");
        break;
    }
}