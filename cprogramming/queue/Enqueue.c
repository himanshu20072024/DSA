#include<stdio.h>
#define N 6
int queue[N];
int front = -1,rear = -1;
void Enqueue(int x)
{
    if(rear == N-1)
        printf("Overflow");
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear += 1;
        queue[rear] = x;
    }
}

void Dequeue()
{
    if(front == -1 && rear == -1)
        printf("queue is empty!!");
    else if(front == rear)
        front = rear = -1;
    else 
    {
        printf("Dequeued element is %d",queue[front]);
        front += 1;
    }
}

void Display()
{
    if(front == -1 && rear == -1)
        printf("queue is empty!!");
    else
        for(int i=front ; i<=rear ; i++)
        {
            printf("%d ",queue[i]);
        }
}

void Peek()
{
    if(front == -1 && rear == -1)
        printf("queue is empty!!");
    else
        printf("Peek element is %d",queue[front]);
}

int main()
{
    Enqueue(765);
    Enqueue(7898);
    Enqueue(4);
    Enqueue(78);
    Enqueue(56);
    Dequeue();
    printf("\n");
    Display();
    printf("\n");
    Peek();
    return 0;
}