#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of arrays : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int first = 0;
    int last = n - 1;
    bool flag = true;
    while(first < last)
    {
        if(arr[first] != arr[last]) 
        {
            flag = false;
            cout<<"Not palindrome";
            break;
        }
        first++;
        last--;
    }
    if(flag == true) cout<<"Palindrome !! Array is palindrome";
}