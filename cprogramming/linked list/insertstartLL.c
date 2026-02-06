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

struct Node* insertAtFirst(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr; 
}

struct Node* insertAtIndex(struct Node* head, int data, int index)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i=0;
    while(i != index-1)
    {
        p = p -> next;
        i += 1;
    }
    ptr -> data = data;
    ptr -> next = p -> next;
    p -> next = ptr;
    return head;
}

struct Node* insertAtEnd(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while(p -> next != NULL)
    {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = NULL; 
    ptr -> data = data;
    return head;
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

    printf("before insertion\n");
    linkedlistTraversal(head);

    //printf("after insertion\n");
    //head = insertAtFirst(head,7);

    //printf("after insertion\n");
    //head = insertAtIndex(head, 7, 1);

    printf("\nafter insertion\n");
    head = insertAtEnd(head, 420);

    linkedlistTraversal(head);

    return 0;
}