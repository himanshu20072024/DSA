#include<stdio.h.>
int main()
{
    int a,even=0,odd=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&b[i]);
    }
    for(int j=0;j<a;j++)
    {
        if(j%2==0)
        even=even+b[j];
        else
        odd=odd+b[j];
    }
    printf("%d",even-odd);
    return 0;
}