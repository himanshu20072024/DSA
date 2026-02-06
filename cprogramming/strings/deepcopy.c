#include<stdio.h>
#include<string.h>
int main()
{
    char A[]="Ideal Honestboy";
    int size;
    for(int i=0;A[i]!='\0';i++)
    {
        size=i;
    }
    printf("%d\n",size);
    char B[size];
    for(int i=0;A[i]!='\0';i++)
    {
        B[i]=A[i];
    }
    A[0]='S';
    printf("%s\n",A);
    printf("%s",B);
    return 0;
}