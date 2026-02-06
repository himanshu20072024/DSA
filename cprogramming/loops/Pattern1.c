#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter no. of lines:");
    scanf("%i",&a);
    for(int b=1;b<=a;b++)
      {
       for(int c=1;c<=b;c=c+1)
       printf("%d ",2*c-1);
       {
        printf("\n");
       }
      }
    return 0;
}