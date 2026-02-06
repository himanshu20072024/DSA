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

    int lar = INT_MIN;
    int slar = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > lar)
        {
            slar = lar;
            lar = arr[i];
        }
        else if(arr[i] > slar && arr[i] != lar)
        {
            slar = arr[i];
        }
    }
    
    if(slar == INT_MIN) cout << "No second largest exists !!";
    else cout << "second largest element is : " << slar;


}