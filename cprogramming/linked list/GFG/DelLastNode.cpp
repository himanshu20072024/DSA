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

Node* DelLast(Node* head)
{
    if(head == NULL) return head;
    if(head -> next == NULL)
    {
        delete head;
        return NULL;
    }
    Node* temp = head;
    while(temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    delete(temp -> next);
    temp -> next = NULL;
    return head;
}

int main()
{
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(5);

    head = DelLast(head);

    while(head != NULL)
    {
        cout<<(head -> data)<<" ";
        head = head -> next;
    }


    return 0;
}