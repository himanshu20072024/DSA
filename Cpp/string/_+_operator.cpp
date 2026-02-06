#include<iostream>
using namespace std;

int main()
{
    string s = "Himanshu Kumar";
    cout<<s<<" "<<s.length()<<endl;
    s = s + " Ideal";
    cout<<s<<" "<<s.length()<<endl;
    s = "Ideal " + s;
    cout<<s<<" "<<s.length()<<endl;
}