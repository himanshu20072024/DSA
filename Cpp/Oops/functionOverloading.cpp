#include<iostream>
using namespace std;

class Loading
{
    public : 
        void sum(int a, int b)
        {
            cout<<a+b<<endl;
        }
        void sum(int a, int b, int c)
        {
            cout<<a+b+c<<endl;
        } 
        void sum(string a, string b)
        {
            cout<<a+b<<endl;
        }
        //int sum(int a, int b)  // not possible because constructor dont know which sum to call 
        // {
        //     return a+b;
        // }
};

int main()
{
    Loading A;
    A.sum(3, 4);
    A.sum(2, 4, 6);
    A.sum("Himanshu", " Kumar");
    A.sum(1, 2);
}