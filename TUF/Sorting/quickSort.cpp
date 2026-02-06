#include<bits/stdc++.h>
using namespace std;

// time complexity is O(n*log base 2 n)
// space complexity is O(1) we are not using any extra spce leave the extra stack space
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j)
    {
        while(arr[i] <= pivot and i <= high)
        {
            i++;
        }
        while(arr[j] > pivot and j >= low+1) 
        {
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if(low < high)
    {
        int pivotIdx = partition(arr, low, high);
        quickSort(arr, low, pivotIdx - 1);
        quickSort(arr, pivotIdx + 1, high);
    }
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
    quickSort(arr, 0, n-1);
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}