#include<stdio.h>
#define N 6

int queue[N];
int front = -1;
int rear = -1;

void Enqueue(int value)
{
    if(rear == N-1)
    {
        printf("Overflow");
        return;
    }
    else if(front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear] = value;
        printf("Enqueued value : %d ",value);
    }
    else
    {
        rear++;
        queue[rear] = value;
        printf("Enqueued value : %d \n",value);
    }    
}

void Dequeue()
{
    if(front == -1)
        printf("underflow condition");
    else 
    {
        printf("Dequeued value:%d\n",queue[front]);
        front++;
    }
}

int main()
{
    // int n;
    // printf("Enter the value you want to enqueue:");
    // scanf("%d",&n);
    Enqueue(34);
    Dequeue();
    return 0;
}