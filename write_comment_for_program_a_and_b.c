// this code is to write comments for program A and B
 
/*
hello my name is vibhay kumar i am a student of vlsi design and technology in which c programming is one of the subjects
i am learning in this subject we have to write a program for a simple calculator and a program to calculate the area of 
a circle given its radius in c programming language i have written the code for both programs and now i am writing 
comments for both programs to explain what each part of the code does and how it works i hope this will help me to
 understand the code better and also help others who are learning c programming 
language to understand the code better as well thank you for reading my comments and i hope you find them helpful

*/
#include <stdio.h>
int main() {
    int a;
    printf("Enter the first number: ");
    scanf("%d", &a);// taking input for first number
    int b;
    printf("Enter the second number: ");
    scanf("%d", &b); //TAKING INPUT FOR SECOND NUMBER  
    int sum = a + b;//HERE THIS IS THE SUM OF FIRST AND SECOND NUMBER
    printf("the sum of first and second number is: %d\n", sum);
    return 0;//THE IS THE END OF LINE
}