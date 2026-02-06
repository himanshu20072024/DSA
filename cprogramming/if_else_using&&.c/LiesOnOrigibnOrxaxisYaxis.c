#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x coordinate\n");
    scanf("%i",&x);
    printf("Enter the y cordinate\n");
    scanf("%d",&y);
    if(x==0 && y==0)
     {
        printf("origin");
     }
     else if(x==0)
       {
        printf("y axis");
       }
    else if(x!=0 && y!=0)
      {
        printf("does not lie on any axis");
      }
    else
        if (y==0)
        {
        printf("x axis");
        }
    return 0;
}