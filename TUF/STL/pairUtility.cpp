#include<iostream>
using namespace std;

// pairs  -> it lies in utility library
void explainPair()
{
    pair<int, int> p = {1,3};  // in this way we define pair
    cout<<p.first<<" "<<p.second<<" ";
    pair<int, pair<int, char>> q = {2,{3,'s'}};  // we can store triplets and more like this 
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<" ";
    pair<int, int> arr[] = {{1,2}, {4,2}, {6,9}};
    cout<<arr[1].second << endl;
    cout << arr[2].first << endl;
}

int main()
{
    explainPair();
}