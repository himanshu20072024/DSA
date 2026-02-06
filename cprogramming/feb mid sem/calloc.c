#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,n;
    //printf("Enter the value of n:");
    scanf("%d",&n);
    int* ptr;


    ptr=(int*)calloc(n,sizeof(int)); // calloc has given 0 to each value


    printf("Enter the n values:");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",(ptr+i));
    }
    

     printf("Entered values are:");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",*(ptr+i));
    }

    free(ptr);


    return 0;
}