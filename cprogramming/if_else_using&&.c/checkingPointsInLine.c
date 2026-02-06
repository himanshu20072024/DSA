#include<stdio.h> //checking if 3 points lie on same straight line or not
int main()
{
    double x1,x2,x3,y1,y2,y3;
    printf("enter x1: ");
    scanf("%lf",&x1);
    printf("enter x2: ");
    scanf("%lf",&x2);
    printf("enter x3: ");
    scanf("%lf",&x3);
    printf("enter y1: ");
    scanf("%lf",&y1);
    printf("enter y2: ");
    scanf("%lf",&y2);
    printf("enter y3: ");
    scanf("%i",&y3);
    double m1=(y2-y1)/(x2-x1);
    double m2=(y3-y2)/(x3-x2);
    if(m1==m2)
     printf("points lie on same line");
    else 
     printf("points does not lie on same line");
    return 0;
}