#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    int i = 0;
    while(s[i] != '\0')
    {
        if(i % 2 != 0) 
            s[i] = 'a';
        i++;
    }
    cout<<s;
}