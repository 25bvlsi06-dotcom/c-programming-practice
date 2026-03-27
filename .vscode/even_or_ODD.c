#include<stdio.h>
#include<math.h>
int main (){
  int n;
    printf("Entre the number:");
    scanf("%d",&n);
    if (n%2==0)
    printf(" THE GIVEN NUMBER IS EVEN\n THE GIVEN NUMBER IS DIVISIBLE BY 2\n");
    else 
    printf("THE GIVEN NUMBER IS ODD\n THE GIVEN NUMBER IS NOT DIVISIBLE BY 2\n");
    return 0;
}