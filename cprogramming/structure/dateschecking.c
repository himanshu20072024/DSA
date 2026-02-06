#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct calender
    {
        int year;
        int month;
        int date;
    } calender;

    calender A,B;
    
    A.year=2007;
    A.month=5;
    A.date=10;
    B.year=2003;
    B.month=8;
    B.date=16;

    // if(A==B) printf("Dates are same");  // ham aise compare nhi kar sakte do structure ko 
    // else printf("The dates are ifferent");  // ham individual year month ya kuch combination ko compare kar skate hai by using if(A.year==B.year) is condition me ye check karke sahi answer bata dega
    
    // aise compare kar sakte hai bool use karke and stdbool.h lagana padega header file ke roop me
    
    bool flag=true;
    if(A.month=B.month)  flag=false;
    if(A.year=B.year) flag=false;
    if(A.date=B.date) flag=false;

    if(flag==true) printf("Dates are same");
    else printf("Dates are not same");
    return 0;
}