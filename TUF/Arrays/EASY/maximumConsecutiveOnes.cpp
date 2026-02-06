// time complexity is O(N)

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            cnt += 1;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }

    cout << "Maximum consecutive ones are : " << maxi;
    return 0;
}