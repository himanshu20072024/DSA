#include<bits/stdc++.h>
using namespace std;

// here in map we dont have used any extra space like in arrays we might have used extra space
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    cout << "Enter the number whose frequency you want to see : ";
    int freq;
    cin >> freq;
    cout << mpp[freq];

}