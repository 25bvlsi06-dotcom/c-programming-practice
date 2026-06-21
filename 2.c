#include<stdio.h>

int main(){
    int m1, m2, m3, m4, m5;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    printf("Total marks: %d\n", total);
    percentage = (total / 500.0) * 100;
    printf("Percentage: %.9f\n", percentage);