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

Node* InsertBegin(Node* head, int x)
{
    Node* temp = new Node(x);
    if(head == NULL) 
    {
        temp -> next = temp;
    }
    else
    {
        Node* curr = head;
        while(curr -> next != head)
            curr = curr -> next;
        curr -> next = temp;
        temp -> next = head;
    }
    return temp;
}

int main()
{
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = head;
    head = InsertBegin(head, 72);
    printList(head);
    return 0;
}