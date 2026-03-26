#include<stdio.h>
int main(){
    float l,b,perimeter;
    printf("ENTER THE LENGTH OF THE RECTANGLE:");
    scanf("%f",&l);

    printf("ENTER THE BREADTH OF THE RECTANGLE:");
    scanf("%f",&b);
   
    perimeter=2*(l+b);
    printf("perimeter of the rectangle :%.2f",perimeter);
    return 0;

       
}