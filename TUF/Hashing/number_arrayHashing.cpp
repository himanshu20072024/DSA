#include<bits/stdc++.h>
using namespace std;

// this is hashing if we use this way it reduces time complexity  because we are travelling the whole array only once 
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    for(auto i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    int hash[13] = {0};

    for(int j = 0 ; j < n ; j++)
    {
        hash[arr[j]] += 1;
    }

    cout << "Enter the number which you want to know how much time in array : ";
    int x ;
    cin >> x;
    cout << hash[x];
}