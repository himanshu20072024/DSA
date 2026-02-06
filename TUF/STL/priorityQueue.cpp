#include<bits/stdc++.h>
using namespace std;

// time complexitites
// push, pop -> O(log(n))
// top -> O(1)

void explainPQ()
{
    // in priority queue greatest number is at top
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); //prints 10
    pq.pop(); // {8, 5, 2}

    cout << pq.top(); // prints 8
    
    // size swap empty function same as others

    // minimum heap or minimum number at top
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(5); // {5}
    pq1.push(2); // {2, 5}
    pq1.push(8); // {2, 5, 8}
    pq1.emplace(10); // {2, 5, 8, 10}

    cout << pq1.top(); // prints 2

}

int main()
{
    explainPQ();
}