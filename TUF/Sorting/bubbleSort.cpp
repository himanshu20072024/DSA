#include<bits/stdc++.h>
using namespace std;

// IMPORTANT
// worst and average time complexity of bubblesort is O(n^2) and best time complexity is O(n)
void bubble_sort(int arr[], int size)
{
    for(int i = 0 ; i < size-1 ; i++)
    {
        int didSwap = 0;
        for(int j = 0 ; j < size-1-i ; j++)
        {
            if(arr[j] > arr[j+1]) 
            {
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    bubble_sort(arr, n);
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}