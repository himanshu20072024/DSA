#include<bits/stdc++.h>
using namespace std;

// queue works on FIFO principal
// all operations are done in O(1) time complexity

void explainQueue()
{
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // {1, 2, 9}

    cout << q.back() << " " << endl; // prints 9
    cout << q.front() << "\n"; // prints 1

    q.pop(); // {2, 9}
    cout << q.front() << " " << endl; // prints 2

    // size swap empty same as stack

}

int main()
{
    explainQueue();
}