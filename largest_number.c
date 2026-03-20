#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a>=c)
        printf("%d is the largest number",a);
    else if (b>=a && b>=c) 
        printf("%d is the largest number",b);
    if (c>=a && c>=b)
        printf("%d is the largest number",c);
        return 0;
        if (a==b && b==c)
            printf("All numbers are equal");
           
                return 0;
}