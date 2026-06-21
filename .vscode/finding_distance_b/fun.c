#include<stdio.h>
 void Goodmorning();// function prototype
 void Goodafternoon();
 void Goodnight();
 void Goodmorning(){
    printf("good morning\n");// function definition
       return; 
 }
 void Goodafternoon(){
    printf("good afternoon\n");// function definition
       return; 
 }
 void Goodnight(){
    printf("good night\n");// function definition
       return; 
 }
 int main(){
  
 Goodmorning(); // function call
 
 Goodafternoon();
 Goodnight();
return 0;
}