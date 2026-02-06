#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same 

    if(p1.first > p2.first) return true;
    return false;

}

void sortArray()
{
    int arr[] = {4,2,34,1,9,76,43,4,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);

    //  checking they are sorted 
    for(auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> arr1 = {4,2,34,1,9,76,43,4,23};
    sort(arr1.begin() + 3, arr1.end()); // they are sorting from arr.begin() + 3 to end 

    //  checking they are sorted 
    for(auto x : arr1)
    {
        cout << x << " ";
    }
    cout << endl;

    // Compare (1,2) and (4,1)
    // → 1 < 4 ✅ → (1,2) comes before (4,1)
    
    // Compare (4,1) and (1,1)
    // → 4 > 1 ❌ → swap → (1,1) comes before (4,1)
    
    // Now compare (1,2) and (1,1)
    // → 1 == 1 ⇒ check .second → 2 > 1 ❌ → swap → (1,1) comes before (1,2)

    pair<int, int> arr2[] = {{1, 2}, {4, 1}, {1, 1}};
    int n1 = sizeof(arr2)/sizeof(arr2[0]);
    sort(arr2, arr2 + n1);

    for(auto x : arr2)
    {
        cout << x.first << " " << x.second << " ";
    }
    cout << endl;

    // below this is sorting by my way whatever way i want by using comperitor 
    pair<int, int> arr3[] = {{1, 2}, {2, 1}, {4, 1}};
    int n2 = sizeof(arr3)/sizeof(arr3[0]);
    // sort it according to second element 
    // if second element is same then sort
    // it according to first element but in descending 

    sort(arr3, arr3 + n2, comp);  // this comp is boolean comperitor
    // {4, 1}, {2, 1}, {1, 2};

    for(auto x : arr3)
    {
        cout << x.first << " " << x.second << " ";
    }
    cout << endl;

    int num = 7; // binary of 7 is 111 so it has 3 1's so it returns number of 1's 
    int cnt = __builtin_popcount(num);
    cout << cnt << endl; // returns 3
    cout << __builtin_popcount(13) << endl; // its binary is  1101 and number of 1's are 3 so it will print 3

    long long num1 = 2143243423423342;
    cout << __builtin_popcountll(num1) << endl;  // if number is long long then builtin popcount becomes builtin popcountll 

    string s = "213";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // it prints all the permutations only if s is sorted if s is not sorted then it will not so use stl to sort then it will write all permutations
    
    int a[] = {1,3,5,6,2,3,76,45,89,0};
    int n4 = sizeof(a)/sizeof(a[0]);
    int maxi = *(max_element(a, a+n4));  // max_element gives you the address of max element and if i do * it gives the value at that address
    cout << maxi << " ";
    int mini = *(min_element(a, a+n4));
    cout << mini;
    
}

int main()
{
    sortArray();
}