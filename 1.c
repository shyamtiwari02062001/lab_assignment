#include<stdio.h>
#include<stdlib.h>
void main(){
    int num1,num2,add,sub,div,int_div,mult,mod;
    printf("Enter number one\n");
    scanf("%d",&num1);
    printf("Enter number two\n");
    scanf("%d",&num2);
    add=num1+num2;
    sub=num1-num2;
    div=num1/num2;
    mult=num1*num2;
    mod=num1%num2;
    printf("Addition of the numbers :- %d\n",add);
    printf("Subtraction of the numbers :- %d\n",sub);
    printf("Division of the the numbers :- %d\n",div);
    printf("Multiplication of the numbers :- %d\n",mult);
    printf("Modulus of the numbers :- %d\n",mod);
}