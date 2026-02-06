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
        front = newNode;
        rear = newNode;
        rear -> data = data;
        rear -> next = front;
    }
    else
    {
        newNode -> data = data;
        rear -> next = newNode;
        rear = newNode;
        rear -> next = front;
    }

    printf("Enqueued :%d",data);
}

void Display()
{
    if(front == NULL)
    {
        printf("Queue empty!!");
        return;
    }
    struct Node* temp = front;
    printf("Queue :");
    do
    {
        printf("%d ",temp -> data);
        temp = temp -> next;
    } while (temp != front);
    
}

int main()
{
    Enqueue(72);
    printf("\n");
    Enqueue(15);
    printf("\n");
    Enqueue(88);
    printf("\n");
    Display();
    printf("\n");
    return 0;
}