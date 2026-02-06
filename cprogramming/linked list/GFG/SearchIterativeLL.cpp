#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int SearchIterative(Node* head, int x)
{
    int pos=1;
    Node* curr = head;
    while(curr != NULL)
    {
        if(curr -> data == x)
        {
            return pos;
        }
        else
        {
            curr = curr -> next;
            pos += 1;
        }
    }
    return -1;
}

int main()
{
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    int pos = SearchIterative(head, 30);
    
    if(pos != -1)
    {
        cout<<pos;
    }
    else cout<<"Element not found";
    return 0;
}