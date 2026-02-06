#include<bits/stdc++.h>
using namespace std;

void leftRotateBy1(vector<int> &arr, int size)
{
    int temp = arr[0];
    for(int i = 0; i < size -1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
}

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    leftRotateBy1(arr, n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    
}