#include<stdio.h>
#include<stdlib.h>
void area(int r){
    double area;
    area=3.14*r*r;
    printf("Area of the circle is %lf\n",area);
}
int main(){
int x;
printf("Enter the radius of the circle\n");
scanf("%d",&x);
area(x);
}