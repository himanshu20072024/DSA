#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter no. of lines:");
    scanf("%i",&a);
    for(int b=1;b<=a;b++)
    {
       for(int c=a;c>b;c=c-1)
        {
           for(int d=1;d<c;d++)
           printf(" ");
        }
           printf("%d",2*b-1);
           printf("\n");
      
      
    }
    return 0;
}