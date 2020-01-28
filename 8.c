#include<stdio.h>
#include<stdio.h>
void main(){
    int x,y,z,max=0;
    printf("Enter number one\n");
    scanf("%d",&x);
    max=x;
    printf("Enter number two\n");
    scanf("%d",&y);
    if(max<y){
        max=y;
    }
    printf("Enter number three\n");
    scanf("%d",&z);
    if(max<z){
        max=z;
    }
    printf("The largest among three number is %d\n",max);

}