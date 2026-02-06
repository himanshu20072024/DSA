// this is the optimal way of left rotating an array by N places

#include<bits/stdc++.h>
using namespace std;

// time complexity is O(n)
// space complexity is O(1)
void leftRotateByNOptimal(vector<int> &arr, int rotations, int size)
{
    reverse(arr.begin(), arr.begin() + rotations);  // use O(n) time complexity 
    reverse(arr.begin() + rotations, arr.end());
    reverse(arr.begin(), arr.end());
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

    int rotations;
    cout << "Enter rotations : ";
    cin >> rotations;
    rotations = rotations % n;

    leftRotateByNOptimal(arr, rotations, n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}