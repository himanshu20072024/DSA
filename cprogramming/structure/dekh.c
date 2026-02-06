#include<stdio.h>
int main()
{
    int a=5,b=7;
    int* c=&a,d=&b;  // ye pointers aise store nhi kar sakte hai ham  
    int* a,b; // iska matlab ye nhi hai ki a and b do pointers store karne ke lie dabbe ban gai hai isko computer int* a , int b ki form me dekhta hai
    printf("%p\n",c);  
    printf("%p",d);
    return 0;
}