// dekh ki problem ko typedef solve kar sakta hai 
// aise dekh 
// typedef int* pointer;  --> iska matlab hamne int* ko pointer naam se replace  kar dia hai now ab dekh ki problem solve ho chuki hai 
#include<stdio.h>
typedef int* pointer;
int main()
{
    int a=5,b=7;
    pointer c=&a,d=&b;  // problem of dekh solved !!
    printf("%p\n",c);  
    printf("%p",d);
    return 0;
}