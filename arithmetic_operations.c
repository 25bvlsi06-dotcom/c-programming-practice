#include <stdio.h>
int main() {
    float a, b, c,sum,diff, product;
    printf("Enter the numbers:");
    scanf("%f %f %f", &a,&b,&c);    
sum=a+b+c;
printf("The sum of the three numbers is: %.3f\n",sum);
diff=a-b-c;
printf("The difference of the three numbers is: %.3f\n", diff);
product=a*b*c;
printf("The product of the three numbers is: %.3f\n", product);
    return 0;
}
