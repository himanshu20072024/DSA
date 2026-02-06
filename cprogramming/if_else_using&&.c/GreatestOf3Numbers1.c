#include<stdio.h>
int main()
{
    printf("enter percentage: ");
    int a;
    scanf("%i",&a);
    // if(a>90)
    //  {
    //     printf("A grade\n");
    //  }
    // else if(a>80)
    //  {
    //     printf("B grade\n");
    //  }
    // else if(a>60)
    //  {
    //     printf("C grade\n");
    //  }
    // else if(a>40)
    //  {
    //     printf("Need Improvement\n");
    //  }
    // else if(a>2)
    //  {
    //     printf("GREAT WORK AWESOME EXCELLENT\n");
    //  }
    // else
    //  {
    //     printf("fails😑\n");
    //  }
    if(a>90)
     {
        printf("A grade");
     }
        else
         if(a>70)
           {
            printf("B grade");
           }
              else
                if(a>50)
                  {
                    printf("C grade");
                  }
                     else
                      if(a>10)
                       {
                        printf("Best grade");
                       }
                         else
                           printf("DOING GREAT WORK");

     
    return 0;
}