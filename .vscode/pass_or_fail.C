#include<stdio.h>
int main(){
   int marks;
   printf("Entre your marks:");
   scanf("%d",&marks);
   if (marks>30){
printf("congratulation! you have passed.");
} 
if(marks<=30){
    printf("you have been failed!\n");
    printf("BETTER LUCK NEXT TIME!");
}
    return 0;
}

