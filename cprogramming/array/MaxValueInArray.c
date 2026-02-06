#include<stdio.h>
int main()
{
    int a;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&b[i]);
    }
    for(int j=0;j<a-1;j++)
    {
        if(b[j+1]>b[0])
        b[0]=b[j+1];
    }
    printf("%d",b[0]);
    return 0;
}