#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],n,min=0;
    printf("Enter the number of elements to be entered in the array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d element in the array\n",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        min=a[0];
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("Minimum value among the array is %d\n",min);
}