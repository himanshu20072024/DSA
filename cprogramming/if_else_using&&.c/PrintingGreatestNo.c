#include<stdio.h>
int main()
{
int x,y,z;
printf("enter first number");
scanf("%i",&x);
printf("enter second number");
scanf("%i",&y);
printf("enter third number");
scanf("%i",&z);
if(x>y)
{
    
        if(x>z)
        printf("x is greatest");
    
    
        else
        printf("z is greatest");
    
}
else
   {
     
        if(y>z)
        printf("y is greatest");
     
     
        else
        printf("z is greatest");
     
   }
return 0;
}