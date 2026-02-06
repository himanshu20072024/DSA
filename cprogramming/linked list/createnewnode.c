#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node* next;
};

struct Node* createnode(int n)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    int data;
    newNode -> data = n;
    newNode -> next = NULL;
    return newNode;
}

struct Node* createLinkedList(int n)
{
    int data;
    struct Node* head = NULL;
    struct Node* temp = NULL;
    for(int i=0 ; i < n ; i++)
    {
        printf("Enter data for node %d:",i+1);
        scanf("%d",&data);

        struct Node* newNode = createnode(data);

        if(head == NULL)
        {
            head = newNode; // first node becomes head
            temp = head;
        }
        else
        {
            temp -> next = newNode; // append new node
            temp = temp -> next;
        }
    }
    return head;
}
int mian()
{
    return 0;
}