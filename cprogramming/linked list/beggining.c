#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

void linkedlistTraversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
       printf("\n%d\n", ptr -> data);
       ptr = ptr -> next;
    }
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 23;
    head -> next = temp1;
    temp1 -> data = 45;
    temp1 -> next = temp2;
    temp2 -> data = 123;
    temp2 -> next = NULL;

    linkedlistTraversal(head);

    return 0;
}