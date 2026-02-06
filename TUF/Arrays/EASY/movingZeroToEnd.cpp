// in bruteforce method just create a new array of same size then
// move from i=0 to i<n and if element is zero then continue else newarr[i] = element
// then at last fill the remaining places by zeros 

// time complexity will be O(n)
// space complexity will be O(n) 

// below this optimal solution with time complexity as O(n) and space complexity as O(1)

#include<bits/stdc++.h>
using namespace std;

// time complexity O(n)
// space complexity O(1)
void moveZerosToEnd(vector<int> &arr)
{
    // moving i to first zero element
    int k = -1;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 0)
        {
            k = i;
            break;
        }
    }

    if(k == -1)
    {
        cout << "No zeros found!!";
        return;
    }


    for(int j = k+1; j < arr.size(); j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[j], arr[k]);
            k++;
        }
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

    moveZerosToEnd(arr);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}