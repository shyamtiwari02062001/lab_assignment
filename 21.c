#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],n;
    printf("Enter the number of elements to be inserted in the program\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d is the array\n",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d is repeated\n",a[j]);
            }
            else{
                printf("No element is repeated\n");
            }
        }
    }
}