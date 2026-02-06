#include<bits/stdc++.h>
using namespace std;

// time complexity for all 3 cases is O(n*log base 2 n)
// space complexity is O(n)
void merge(vector<int> &arr, int left, int mid, int right)
{
    vector<int> temp;
    int a = left;
    int b = mid+1;
    while(a <= mid and b <= right)
    {
        if(arr[a] <= arr[b])
        {
            temp.push_back(arr[a]);
            a++;
        }
        else
        {
            temp.push_back(arr[b]);
            b++;
        }
    }

    while(a <= mid)
    {
        temp.push_back(arr[a]);
        a++;
    }

    while(b <= right)
    {
        temp.push_back(arr[b]);
        b++;
    }

    for(int i = 0 ; i < temp.size() ; i++)
    {
        arr[left + i] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int left, int right)
{   
    if(left >= right) return;
    int mid = left + (right - left)/2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
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
    mergeSort(arr, 0, n-1);
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}