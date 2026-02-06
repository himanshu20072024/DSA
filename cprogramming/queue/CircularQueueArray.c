#include<stdio.h>
#define N 5

int queue[N];
int front = -1 ,rear = -1;

void Enqueue(int x)
{
    if((rear + 1) % N == front)
    {
        printf("Overflow!!");
        return;
    }
    if(rear == -1 && front == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear = ((rear + 1) % N);
        queue[rear] = x;
    }

    printf("Enqueued %d",x);
}

void Dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("Underflow!!");
        return;
    }
    if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("Dequeued %d",queue[front]);
        front = (front + 1) % N;
    }
}

void Display()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty!!");
        return;
    }
    printf("Queue:");
    int i = front;
    while(i != rear)                 //  while(1)   // this one also correct
    {                                //  {
        printf("%d ",queue[i]);      //      printf("%d ",queue[i]); 
        i = (i + 1) % N;             //      if(i == rear)  break;
    }                                 //     i = (i + 1) % N;
    printf("%d",queue[rear]);         // }

}

int main()
{
    Enqueue(234);
    printf("\n");
    Enqueue(72);
    printf("\n");
    Enqueue(4532);
    printf("\n");
    Dequeue();
    printf("\n");
    Display();
    printf("\n");
    return 0;
}