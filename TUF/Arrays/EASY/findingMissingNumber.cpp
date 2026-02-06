//  this one is bruteforce for finding missing number in array
// time complexity is O(n^2)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++)
    {
        bool flag = false;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == i)
            {
                flag = true;
                break;
            }
        }
        if(flag == false) cout << i << " ";
    }

    
    return 0;
}