// this one is optimal approach

#include<bits/stdc++.h>
using namespace std;

// time complexity is O(n1 + n2)
// space complexity is O(n1 + n2) not for code but for returning 
vector<int> intersectionArrayOptimal(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> intersectionArr;
    int n1 = arr1.size(), n2 = arr2.size();
    int i = 0, j = 0;
    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            intersectionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return intersectionArr;
}

// time complexity is O(n1 * n2)
// space complexity is O(n2)
vector<int> intersectionArrayBruteforce(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> answer,track(arr2.size(), 0);
    for(int i = 0; i < arr1.size(); i++)
    {
        for(int j = 0; j < arr2.size(); j++)
        {
            if(arr1[i] == arr2[j] && track[j] == 0)
            {
                answer.push_back(arr1[i]);
                track[j] = 1;
                break;
            }

            if(arr2[j] > arr1[i]) break;
        }
    }

    return answer;

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

    vector<int> result = intersectionArrayOptimal(arr1, arr2);

    cout << "Intersection Set is: ";
    for(auto it : result) cout << it << " ";
    cout << endl;

    vector<int> result1 = intersectionArrayBruteforce(arr1, arr2);

    cout << "Intersection Set is: ";
    for(auto it : result1) cout << it << " ";
    cout << endl;
}
