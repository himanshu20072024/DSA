#include <bits/stdc++.h> // or use #include<iostream>
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

// Function to print the linked list
void printList(Node* head)
{
    Node* p = head;
    while (p != NULL)  // Corrected loop (not circular)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

Node* Insert(Node* head, int x)
{
    Node* temp = new Node(x);

    // Case 1: Empty list or inserting at the beginning
    if (head == NULL || x < head->data)
    {
        temp->next = head;
        return temp; // New head
    }

    // Case 2: Insert in middle or end
    Node* curr = head;
    while (curr->next != NULL && curr->next->data < x)
    {
        curr = curr->next;
    }

    temp->next = curr->next;
    curr->next = temp;

    return head;
}

void PrintMiddle(Node* head)
{
if(head == NULL) return ;
Node* slow = head;
Node* fast = head;
while(fast != NULL and fast ->next != NULL)
{
    slow = slow -> next;
    fast = fast -> next -> next;
}
cout<<slow -> data<<endl;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Before insertion:" << endl;
    printList(head);

    //head = Insert(head, 25);
    head = Insert(head, 5);
    //head = Insert(head, 50);

    cout << "After insertion:" << endl;
    printList(head);

    PrintMiddle(head);

    return 0;
}
