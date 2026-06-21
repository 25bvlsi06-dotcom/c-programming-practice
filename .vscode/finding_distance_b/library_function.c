#include<stdio.h>
float average(int a,int b ,int c);
float average(int a,int b ,int c){
     return (a+b+c)/3.0;
}
 int main (){
    int a;
    int b;
    int c; 
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
   printf(" AVERAGE OF THREE NUMBERS IS :%.2f\n",average(a,b,c));
    return 0;
 }
