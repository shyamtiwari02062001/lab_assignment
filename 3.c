#include<stdio.h>
#include<stdlib.h>
void main(){
    int r;
    double area;
    printf("Enter the radius of circle\n");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("The area of the circle is %lf \n",area);
}