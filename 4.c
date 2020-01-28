#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    printf("Enter the value for x \n");
    scanf("%d",&x);
    printf("Enter the value for y \n");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The value of x is %d\n",x);
    printf("The value of y is %d\n",y);
}