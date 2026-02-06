#include<bits/stdc++.h> // or use #include<iostream>
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

void printList(Node* head)
{
    Node* p =head;
    do
    {
        cout<<p -> data<<endl;
        p = p -> next;
    } while (p != head);
}

Node* DeleteHead(Node* head)
{
    if (head == NULL) return NULL; // Empty list
    if (head->next == head) // Only one node
    {
        delete head;
        return NULL;
    }
    else
    {
        Node* curr = head;
        curr -> data = head -> next -> data;
        curr = curr -> next;
        head -> next = curr -> next;
        delete curr;
        return head;
    }
}

int main()
{
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = head;
    printList(head);
    head = DeleteHead(head);
    cout<<"After deleting\n";
    printList(head);

    return 0;
}