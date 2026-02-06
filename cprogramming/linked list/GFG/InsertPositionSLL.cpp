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

Node* InsertPosition(Node* head, int pos, int data)
{
    Node* temp = new Node(data);
    if(pos == 1)
    {
        temp -> next = head;
        return temp;
    }
    Node* curr = head;
    for(int i = 1; i <= pos-2 && curr != NULL; i++)
    {
        curr = curr -> next;
    }
    if(curr == NULL) return head;
    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}

int main()
{
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(5);
    cout<<"Enter the position where you want to insert data :";
    int a,b;
    cin>>a;
    cout<<"Enter the data : ";
    cin>>b;
    head = InsertPosition(head, a, b);

    while(head != NULL)
    {
        cout<<(head -> data)<<" ";
        head = head -> next;
    }
    return 0;
}