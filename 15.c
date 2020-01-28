#include<stdio.h>
#include<stdlib.h>
void sum(int a){
    int b=10;
    printf("The sum of two number is %d\n",a+b);
}
void diff(int *a){
    int b=5;
    printf("The difference of two number is %d\n",*a-b);
}
int main(){
    int i=10;
    sum(i);
    diff(&i);
}