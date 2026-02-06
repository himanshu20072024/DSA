#include<bits/stdc++.h>
using namespace std;

// time complexity : sum of below all big O
void printDivisors(int n)
{
    vector<int> list;
    // O(sqrt(n))
    for(int i = 1 ; i*i <= n ; i++) // here i*i <= n is same as i <= sqrt(n) you can check
    {
        if(n % i == 0)
        {
            list.push_back(i);
            if((n/i) != i)
                list.push_back(n/i);
        }
    }
    // O(no. of factors * log(no. of factors))
    sort(list.begin(), list.end());
    // O(no. of factors)
    for(auto x : list)
        cout << x << " ";
    
}

int main()
{
    int n;
    cout<<"Enter N:";
    cin >> n;
    printDivisors(n);
}