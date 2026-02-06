#include<bits/stdc++.h>
using namespace std;

void f(int i, int size, int arr[])
{
    if(i >=size/2) return;
    swap(arr[i], arr[size-i-1]);
    f(i+1, size, arr);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    f(0, n, arr);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}