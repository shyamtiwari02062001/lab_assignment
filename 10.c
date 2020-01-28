#include<stdio.h>
#include<stdlib.h>
int main(){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum=sum+i;
    }
    printf("The sum of first 10 number is %d\n",sum);
}