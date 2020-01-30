#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],*b[10],n;
    printf("Enter the number of elements to be entered in the array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d element of the array \n",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=&a[i];
        printf("%d is the %d element of the array\n",*b[i],i+1);
    }
}