#include<bits/stdc++.h>
using namespace std;

// stack works on LIFO pricipal
// in stack every operation is done in just O(1) time complexity
void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.emplace(7);

    cout << st.top() << " "; // 7
    cout << st.size() << " "; // 7
    cout << st.empty() << " "; // 0 means not empty
    
    // creating 2 new stacks
    stack<int> st1, st2;
    st1.swap(st2); // both stacks are swapped
}

int main()
{
    explainStack();
}