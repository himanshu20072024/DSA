#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void LinkedListTravel(struct Node* p)
{
    struct Node* temp = p;
    do
    {
        printf("Elements are : %d\n", p -> data);
        p = p -> next;
    } while (p -> next != temp);
    
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

    LinkedListTravel(head);



    return 0;
}