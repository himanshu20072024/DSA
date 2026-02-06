#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("Want something type 1 for yes and any number for saying no :");
    scanf("%d",&a);
    if(a==1)
       {
        printf("You want pattern if yes type 1 or if you want to check any table type any number you want:");
        scanf("%d",&b);
        if(b==1)
        {
            printf("Enter a number:");
            scanf("%d",&c);
            for(int i=1;i<=c;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
        else
        printf("Enter the table you want:");
        scanf("%i",&d);
        for(int i=d;i<=d*10;i=i+1)
        {
            if(i%d==0)
            printf("%d\n",i);
        }
       }
    else
    {
       printf("Why you dont want anything you still have chance to see if you want to see type 1 else type any number so that we can know you are not interested in anything\n");
       printf("Enter number for your last chance:");
       scanf("%d",&e);
       if(e==1)
       {
        printf("You want pattern if yes type 1 or if you want to check any table type any number you want:");
        scanf("%d",&b);
        if(b==1)
        {
            printf("Enter a number:");
            scanf("%d",&c);
            for(int i=1;i<=c;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
        else
        printf("Enter the table you want:");
        scanf("%i",&d);
        for(int i=d;i<=d*10;i=i+1)
        {
            if(i%d==0)
            printf("%d\n",i);
        }
       }
       else
       printf("You are divyansh i know as you are here ");
    }
       
    return 0;
}
