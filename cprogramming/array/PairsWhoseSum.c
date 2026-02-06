#include<stdio.h.>//Some mistake here which i dont want to find out so not solving it 
int main()
{
    int a,sum=0,x;
    printf("Enter the size of array : ");
    scanf("%d",&a);
    printf("Enter the number : ");
    scanf("%d",&x);
    int b[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&b[i]);
    }
    for(int i=0;i<a;i++)
    {
       for(int j=i+1;j<a;j++)
       {
           if(b[i]+b[j]==a)
           {
              sum+=1;
              printf("(%d,%d)",b[i],b[i+1]);
           }
       }
    }
    printf("%d",sum);
    return 0;
}