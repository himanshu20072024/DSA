#include<iostream>
using namespace std;

int main()
{
    int n = 65;
    while(n <= 90)
    {
        char ch = (char)n;
        cout<<n<<" "<<ch<<endl;
        n += 1;
    }
}