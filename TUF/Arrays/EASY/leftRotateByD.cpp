// this is brute force method not optimal in optimal we will remove the space complexity 

#include<bits/stdc++.h>
using namespace std;

// time complexity is O(n+d)
// space complexity is O(d)
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
void leftRotateByN(vector<int> &arr, int rotations, int size)
{
    int temp[rotations];
    // copying first rotations element
    for(auto i = 0; i < rotations; i++)
    {
        temp[i] = arr[i];
    }

    // shifting remaining elements to left
    for(int i = rotations; i < size; i++)
    {
        arr[i - rotations] = arr[i];
    }

    // copying temp elements to end
    for(int j = 0; j < rotations; j++)
    {
        arr[size - rotations + j] = temp[j];
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
    cout << endl;

    int rotations;
    cout << "Enter rotations : ";
    cin >> rotations;
    rotations = rotations % n;

    leftRotateByN(arr, rotations, n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}