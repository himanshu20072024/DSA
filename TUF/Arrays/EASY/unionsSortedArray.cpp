// this one is brute force method where we will use set to store 
// time complexity will be O(n1.log n) + O(n2.log n) + O(n1 + n2)
// space complexity will be O(n1 + n2)

#include<bits/stdc++.h>
using namespace std;

set<int> unionSetBruteforce(int arr1[], int arr2[], int size1, int size2)
{
    set<int> st;

    // taking values from first array  to set
    for(int i = 0; i < size1; i++) st.emplace(arr1[i]);

    // taking values from second array  to set
    for(int i = 0; i < size2; i++) st.emplace(arr2[i]);

    return st;
}

int main()
{
    int n1,n2;
    cout << "Enter size of first array : ";
    cin >> n1;
    cout << "Enter size of second array : ";
    cin >> n2;

    int arr1[n1], arr2[n2];

    // taking input of first array
    cout << "Enter first array elements : ";
    for(int i = 0; i < n1; i++)   cin >> arr1[i];

    // taking input of second array
    cout << "Enter second array elements : ";
    for(int i= 0; i < n2; i++)   cin >> arr2[i];

    set<int> st2 = unionSetBruteforce(arr1, arr2, n1, n2);

    // printing union of both set
    cout << "Union of both sets is : ";
    for(auto it : st2) cout << it << " ";

}