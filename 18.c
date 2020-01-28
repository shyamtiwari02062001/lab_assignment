#include<stdio.h>
#include<stdlib.h>
void time(double HRS, double MIN, double SEC){
    double hours_in_min;
    double total_time,sec_in_min,sec;
    hours_in_min=HRS*60;
    sec_in_min=SEC/60;
    total_time=hours_in_min+MIN+sec_in_min;
    printf("The time in minutes is %lf\n",total_time);
}
int main(){
    double hours,min,sec;
    printf("Enter the time in hours\n");
    scanf("%lf",&hours);
    printf("Enter the time in min\n");
    scanf("%lf",&min);
    printf("Enter the time in sec\n");
    scanf("%lf",&sec);
    time(hours,min,sec);
}