#include <stdio.h>

int main() {
    float r, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    float pi = 3.14;

    area = pi * r * r;

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}