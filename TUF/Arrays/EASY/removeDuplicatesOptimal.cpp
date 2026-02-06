// this is the optimal code for removing duplicates in an sorted array
#include<bits/stdc++.h>
using namespace std;

// time complexity is O(N) only 
// space complexity is O(1)
// 1 1 1 1 1 1 1 2 2 2 
int removeDuplicatesOptimal(vector<int> &arr, int start, int end)
{
    int ptr = 0;
    for(int i = 1; i < end; i++)
    {
        if(arr[ptr] != arr[i])
        {
            arr[ptr+1] = arr[i];
            ptr++;
        }
    }
    return ptr+1;
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

    int newidx = removeDuplicatesOptimal(arr, 0, n);

    for(int i = 0 ; i < newidx ; i++)
    {
        cout << arr[i] << " ";
    }

    
}