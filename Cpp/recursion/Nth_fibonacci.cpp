#include<iostream>
using namespace std;

int fibonacci(int x)
{
    if(x == 1 || x == 2) return 1;
    return (fibonacci(x-1) + fibonacci(x-2));
}

int main()
{
    int a;
    cout<<"Enter no. for fibonacci : ";
    cin>>a;
    cout<<fibonacci(a);
}