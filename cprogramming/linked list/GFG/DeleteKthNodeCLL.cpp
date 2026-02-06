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
    if (head == NULL) return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }

    Node* last = head;
    while (last->next != head) last = last->next;

    Node* newHead = head->next;
    last->next = newHead;
    delete head;

    return newHead;
}

Node* DeleteKth(Node* head, int x)
{
    if(head == NULL) return head;
    if(x == 1) return DeleteHead(head);
    Node* curr = head;
    for(int i = 0; i < x - 2; i++)
    {
        curr = curr -> next;
    }
    Node* temp = curr -> next;
    curr -> next = temp -> next;
    delete temp;
    return head;
}

int main()
{
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = head;
    printList(head);
    head = DeleteKth(head, 23);
    cout<<"After deleting\n";
    printList(head);

    return 0;
}