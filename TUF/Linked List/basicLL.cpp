#include<bits/stdc++.h>
using namespace std;

class Node
{
    public :
        int data;
        Node* next;

    public:
        Node(int data, Node* next)
        {
            this -> data = data;
            this -> next = next;
        }
};

int main()
{
    Node* y = new Node(10, nullptr);
    Node* x = new Node(20, y);
    cout << y -> next;
}