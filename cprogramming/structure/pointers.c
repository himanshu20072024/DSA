#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        char name[50];
        int roll;
        float cgpa;
    };

    struct student s1,s2,s3;

    struct student* ptr;
    ptr = &s1;
    strcpy(s1.name,"Himanshu");
    s1.roll = 24;
    s1. cgpa = 8.88;

    printf("\n%s\n", (*ptr).name);  // pointer ki help se print karwaya using dot operator
    printf("%0.2f\n", ptr->cgpa ); // printed using arrow operator
    printf("%d", ptr->roll );
    return 0;
}