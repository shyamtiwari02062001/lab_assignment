#include<stdio.h>
#include<stdlib.h>
int main(){
    int *n,x;
    printf("Enter a number \n");
    scanf("%d",&x);
    n=&x;
    if(n>0){
        printf("It is negative\n");
    }
        else if(n==0){
            printf("It is zero\n");
    }   
    else("It is positive\n");
}