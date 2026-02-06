#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void ShowLL(struct Node* ptr)
{
    struct Node* p = ptr;
    do
    {
        printf("Element is :%d\n", p -> data);
        p = p->next;
    }
    while(p != ptr);
    return;
}

struct Node* BeginningLL(struct Node* ptr, int data)
{
    struct Node* p = ptr;
    struct Node* q = (struct Node*)malloc(sizeof(struct Node));
    q -> data = data;
    q -> next = ptr;
    while(p->next != ptr)
    {
        p = p -> next;
    }
    p -> next = q;
    return q;
}

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp4 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp5 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp6 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp7 = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 1;
    temp1 -> data = 2;
    temp2 -> data = 3;
    temp3 -> data = 4;
    temp4 -> data = 5;
    temp5 -> data = 6;
    temp6 -> data = 7;
    temp7 -> data = 8;

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = temp5;
    temp5->next = temp6;
    temp6->next = temp7;
    temp7->next = head;

    printf("Before inserting LL is:\n ");
    ShowLL(head);
    printf("After inserting LL is:\n");
    head = BeginningLL(head, 37);
    ShowLL(head);



    return 0;
}