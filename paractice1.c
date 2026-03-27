#include<stdio.h>

int main(){
    float pi=3.14,r;
    printf("entre the radius:");
    scanf("%f",&r);
    float area_of_circle=pi*r*r;
 
    printf("area of given circle = %.2f",area_of_circle);
    return 0;
    
}