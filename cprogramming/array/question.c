#include<stdio.h>
int main()
{
    int marks[10]={100,32,45,1,56,87,76,3,45,23};
    for(int i=0;i<=9;i++)
    {
        if(marks[i]<35)
        printf("%d\n",i);
    }
    return 0;
}