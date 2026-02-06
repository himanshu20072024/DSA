#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements of arrays : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > max) max = arr[i];
    }
    int smax = arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] != max)
        {
            if(arr[i] > smax) smax = arr[i];
        }
    }
    cout<<endl<<smax;
}