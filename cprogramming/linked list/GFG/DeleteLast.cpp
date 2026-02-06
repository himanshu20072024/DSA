#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void linkedlistTraversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
       printf("\n%d\n", ptr -> data);
       ptr = ptr -> next;
    }
}

Node* DeleteLast(Node* head)
{
    if(head == NULL or head -> next == NULL)
    {
        delete head;
        return NULL;
    }
    Node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> prev -> next = NULL;
    delete temp;
    return head;
}

int main()
{
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    Node* temp3 = new Node(40);
    Node* temp4 = new Node(50);
    Node* temp5 = new Node(60);

    head -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;
    temp2 -> next = temp3;
    temp3 -> prev = temp2;
    temp3 -> next = temp4;
    temp4 -> prev = temp3;
    temp4 -> next = temp5;
    temp5 -> prev = temp4;

    printf("before reverse\n");
    linkedlistTraversal(head);

    head = DeleteLast(head); 

    printf("after reverse\n");
    linkedlistTraversal(head);

    return 0;
}