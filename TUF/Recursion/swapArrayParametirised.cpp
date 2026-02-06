#include<bits/stdc++.h>
using namespace std;

void fn(int left, int right, int arr[])
{
    if(left >= right) return;
    swap(arr[left++], arr[right--]);
    fn(left, right, arr);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    fn(0, n-1, arr);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}