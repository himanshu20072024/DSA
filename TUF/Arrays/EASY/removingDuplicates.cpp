// we have to remove duplicate elements from a sorted array 

// this is bruteforce method using set
#include<bits/stdc++.h>
using namespace std;
 
// time complexity of this code is O(n*log n + n)
// space complexity is O(n)
int removeDuplicates(vector<int> &arr, int start, int end)
{
    set<int> s;
    for(int i = 0; i < end; i++)
    {
        s.insert(arr[i]); // takes n*log n time complexity for insertion in set
    }

    //set<int>::iterator set_iterator = s.begin();
    int idx = 0;
    for(auto it : s)
    {
        arr[idx++] = it;
    }
    return idx;
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

    int newidx = removeDuplicates(arr, 0, n);

    for(int i = 0 ; i < newidx ; i++)
    {
        cout << arr[i] << " ";
    }

    
}