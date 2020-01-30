#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,z,*a,*b,*c,max=0;
    printf("Enter the first number \n");
    scanf("%d",&x);
    a=&x;
    max=*a;
    printf("Enter the second number \n");
    scanf("%d",&y);
    b=&y;
    if(max<*b){
    max=*b;
    }
    printf("Enter the second number \n");
    scanf("%d",&z);
    c=&z;
    if(max<*c){
    max=*c;
    }
    printf("%d is the maximum among the three input\n",max);
}