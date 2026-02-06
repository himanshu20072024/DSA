// this one is the optimal code for union of sets 
// time complexity will be O(n1 +n2)
// space complexity will be O(n1 + n2) not for my code to work but for returning the answer 

#include <bits/stdc++.h>
using namespace std;

vector<int> unionSetOptimal(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> unionArr;
    int i = 0, j = 0;
    int n1 = arr1.size(), n2 = arr2.size();

    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            if(unionArr.empty() || arr1[i] != unionArr.back())
                unionArr.push_back(arr1[i]);
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            if(unionArr.empty() || arr2[j] != unionArr.back())
                unionArr.push_back(arr2[j]);
            j++;
        }
        else // arr1[i] == arr2[j]
        {
            if(unionArr.empty() || arr1[i] != unionArr.back())
                unionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while(i < n1) 
    {
        if(unionArr.empty() || arr1[i] != unionArr.back())
            unionArr.push_back(arr1[i]);
        i++;
    }

    while(j < n2) 
    {
        if(unionArr.empty() || arr2[j] != unionArr.back())
            unionArr.push_back(arr2[j]);
        j++;
    }

    return unionArr;
}

int main()
{
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> arr1(n1), arr2(n2);

    cout << "Enter first array elements (sorted): ";
    for(int i = 0; i < n1; i++) cin >> arr1[i];

    cout << "Enter second array elements (sorted): ";
    for(int i = 0; i < n2; i++) cin >> arr2[i];

    vector<int> result = unionSetOptimal(arr1, arr2);

    cout << "Union Set is: ";
    for(auto it : result) cout << it << " ";
    cout << endl;
}
