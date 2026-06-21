



#include<stdio.h>
int main(){
    int a = 72;
    int *j = &a;  // ✅ pointer variable j holds the address of a
    printf("The address of a is: %p\n", &a);  // ✅ directly works
    printf("The value of address a  is: %d\n", *j);   // ✅ works because j holds the address of a
    return 0;
}
