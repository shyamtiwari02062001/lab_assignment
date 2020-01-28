#include<stdio.h>
#include<stdlib.h>
void greatest(int a,int b, int c, int max){
    max=a;
    (max<b) && (max=b);
    (max<c) && (max=c);
    printf("Greatest among three is %d\n",max);
}
int main(){
    int x,y,z,max=0;
    printf("Enter first value\n");
    scanf("%d",&x);
    printf("Enter second value\n");
    scanf("%d",&y);
    printf("Enter third value\n");
    scanf("%d",&z);
    greatest(x,y,z,max);
}