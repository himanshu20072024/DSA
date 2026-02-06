#include<bits/stdc++.h>
using namespace std;

// OPTIMAL time complexity for finding second largest and second smallest is O(n)
// if you sorted the array then its time complexity will become O(n*log n) because best sorting has O(n.log n ) time complexity 
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

    int sml = INT_MAX;
    int ssml = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < sml)
        {
            ssml = sml;
            sml = arr[i];
        }
        else if(arr[i] < ssml && arr[i] != sml)
        {
            ssml = arr[i];
        }
    }
    
    if(ssml == INT_MAX) cout << "No second smallest exists !!";
    else cout << "second smallest element is : " << ssml;


}