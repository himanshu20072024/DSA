#include<bits/stdc++.h>
using namespace std;

void  explainDeque()
{
    deque<int> dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); //{3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    dq.back();
    cout << dq.back() << endl;

    dq.front();
    cout << dq.front() << endl;

    deque<int>::iterator dq_iterator = dq.begin();

    for(auto dq_iterator = dq.begin() ; dq_iterator != dq.end() ; dq_iterator++)
    {
        cout << *(dq_iterator) << " ";
    }
    cout << endl;

    for(auto it : dq)
    {
        cout << it << " ";
    }
    
    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main()
{
    explainDeque();
}