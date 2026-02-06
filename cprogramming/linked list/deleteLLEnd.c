#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void linkedlistTravel(struct Node* ptr)
{
    while(ptr != NULL)
    {
        printf("%d\n\n", ptr -> data);
        ptr = ptr -> next;
    }
}

struct Node* removeStart(struct Node* ptr)
{
    struct Node* p = ptr;
    ptr = ptr -> next;
    free(p);
    return ptr;
}

struct Node* removeEnd(struct Node* ptr)
{
    struct Node* p = ptr -> next;
    struct Node* q = ptr;
    while(p -> next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }
    q -> next = NULL;
    free(p);
    return ptr;
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
    temp7->next = NULL;

    printf("before removal\n");
    linkedlistTravel(head);

    head = removeStart(head);

    printf("After removal of start\n");
    linkedlistTravel(head);

    head = removeEnd(head);

    printf("After removal of end\n");
    linkedlistTravel(head);


    return 0;
}