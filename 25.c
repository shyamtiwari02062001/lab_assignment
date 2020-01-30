#include<stdio.h>
#include<stdlib.h>
int main(){
    int *n,sum=0,x=10;
    n=&x;
    for(int i=1;i<=*n;i++){
        sum=sum+i;
    }
    printf("Sum of 10 numbers is %d\n",sum);
}