#include<stdio.h>
#include<stdlib.h>
int main(){
    int no_of_days;
    printf("Enter the no of days present in the month of february\n");
    scanf("%d",&no_of_days);
    if(no_of_days==28){
        printf("It is not a leap year\n");
    }
    else if(no_of_days==29){
        printf("It is a leap year\n");
    }
    else{
        printf("Invald input!\n");
    }
}