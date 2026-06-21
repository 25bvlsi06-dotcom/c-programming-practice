# include<stdio.h>

#include <string.h>

struct student {
    char name[200];
    long long roll_no;
    float cgpa;
};

int main() {
    struct student s1, s2;

    strcpy(s1.name, "VIBHAY KUMAR");  // ✅ No assignment operator
    s1.roll_no = 2508581730027;
    s1.cgpa = 8.82;

    strcpy(s2.name, "SIMRAN SINGH");  // ✅ No assignment operator
    s2.roll_no = 2508581730024;
    s2.cgpa = 7.82;

    printf("Student Name:    %s %s\n",       s1.name,    s2.name);    // ✅
    printf("Student Roll No: %lld %lld\n",   s1.roll_no, s2.roll_no); // ✅
    printf("Student CGPA:    %.2f %.2f\n",   s1.cgpa,    s2.cgpa);    // ✅

    return 0;
}