#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],b[10],c[10],x,y,z;
    printf("Enter the number of element to be inseted in the first array\n");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("Enter the %d elemnt of the array\n",i+1);
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    z=x;
    printf("Enter the number of element to be inseted in the second array\n");
    scanf("%d",&y);
    for(int i=0;i<y;i++){
        printf("Enter the %d elemnt of the array\n",i+1);
        scanf("%d",&b[i]);
        c[z]=b[i];
        z++;
    }
   for(int i=0;i<z;i++){
       printf("The %d element of the merged array is %d\n",i+1,c[i]);
   }
}