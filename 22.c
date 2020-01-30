#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a[10],pos;
    printf("Enter the number of element to be enterd in the array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d element of the array\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the position of array whose element is to be deleted\n");
    scanf("%d",&pos);
    if(pos==0){
        printf("invalid input\n");
    }
    else{
    for(int i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    }
    printf("The array after deleting the array is\n");
    for(int i=0;i<n-1;i++){
        printf("The %d element of the array is %d\n",i+1,a[i]);
    }
}