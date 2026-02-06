#include<iostream>
using namespace std;

int main()
{
    int x = 3;
    float y = 2;
    cout<<x/y<<endl;
    float a = 32;
    int b = 5;
    cout<<a/b;

    // Heirarchy
    cout<<"\nHeirarchy\n";
    int i = 2*3/4;
    int j = 2+3/4; // bodmas used by computer
    cout<<i<<endl<<j;

    //ASCII value
    cout<<"\n\nAscii value\n";
    int c = 98;
    cout<<(char)c;

    //Observation
    cout<<"\n\ninteger divided integer but stored in float gives int type only\n\n";
    float d = 7/2;
    cout<<d<<endl;
}