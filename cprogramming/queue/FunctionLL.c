#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void Enqueue(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(front == NULL && rear == NULL)
    {
        front = rear = newNode;
        newNode -> data = data;
        newNode -> next = NULL;
    }
    else
    {
        rear -> next = newNode;
        rear = newNode;
        newNode -> data = data;
        newNode -> next = NULL;
    }
}

void Display()
{
    struct Node* temp = front;
    while(temp != NULL)
    {
        printf("%d ",temp -> data);
        temp = temp -> next;
    }

}

void Dequeue()
{
    if(front == NULL)
    {
        printf("Underflow!!");
        return;
    }
    printf("Dequeued %d ",front -> data);
    struct Node* temp = front;
    front = front -> next;
    free(temp);
}

int main()
{
    Enqueue(345);
    Enqueue(72);
    Display();
    printf("\n");
    Dequeue();
    printf("\n");
    Display();
    return 0;
}