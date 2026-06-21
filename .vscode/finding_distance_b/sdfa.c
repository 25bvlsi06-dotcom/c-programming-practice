#include<stdio.h>
float force();
float force(){
    float mass;
    float g=9.8;
     float force=mass*g;
    return ;
}
int main(){
    printf("Enter the mass of the object: ");
    scanf("%f", &mass);
    printf("The force acting on the object is: %.2f N\n", force());
    return 0;
}