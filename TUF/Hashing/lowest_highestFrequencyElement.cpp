#include<bits/stdc++.h>
using namespace std;

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
    cout << hash[x] << endl;

    int min_Freq = INT_MAX, max_Freq = INT_MIN;
    int min_Element = -1, max_Element = -1;

    for(int i = 0 ; i < 13 ; i++)
    {
        if(hash[i] > 0)
        {
            if(hash[i] < min_Freq)
            {
                min_Freq = hash[i];
                min_Element = i;
            }
            if(hash[i] > max_Freq)
            {
                max_Freq = hash[i];
                max_Element = i;
            }
        }  
    }

    cout << "Lowest frequency element is : " << min_Element << " and highest frequency element is : " << max_Element;
}