#include<bits/stdc++.h>
using namespace std;

// time complexity of selection sort is O(n^2) for all 3 cases worst, avg, best
void selection_sort(int arr[], int size)
{
    for(int i = 0 ; i <= size-2 ; i++)
    {
        int min_idx = i;
        for(int j = i ; j < size ; j++)
        {
            if(arr[j] < arr[min_idx]) min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    selection_sort(arr, n);
    for(int i = 0 ; i < n ; i++) 
    {
        cout << arr[i] << " ";
    }
}