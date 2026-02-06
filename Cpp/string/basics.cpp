#include<iostream>
using namespace std;

int main()
{
    string str ="I am Himanshu Kumar";
    cout<<str;
    cout<<endl;
    string input;
    cout<<"Enter input string : "<<endl;
    cin>>input; 
    cout<<input;  // only first word will be printed because after space it thinks about next input which is nothing think like taking matrix input
}