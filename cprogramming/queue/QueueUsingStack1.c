#include<stdio.h>
#define N 6
int S1[N] ,S2[N];
int top1 = -1 ,top2 = -1 ,count = 0;

void Push1(int data)
{
    if(top1 == N-1)  
        printf("Stack1 Overflow");
    else
    {
        S1[++top1] = data;
    }
}

void Push2(int data)
{
    if(top2 == N-1)  
        printf("Stack2 Overflow");
    else
    {
        S2[++top2] = data;
    }
}

void Enqueue(int data)
{
    Push1(data);
    count++;
}

int Pop1()
{
    if(top1 == -1)
    {
        printf("Stack1 underflow\n");
        return -1;
    }
    return S1[top1--];
}

int Pop2()
{
    if(top2 == -1)
    {
        printf("Stack2 underflow\n");
        return -1;
    }
    return S2[top2--];
}

void Dequeue()
{
    if(top1 == -1)
    {
        printf("Queue Empty");
        return;
    }
    else
    {
        for(int i = 0 ; i < count ; i++)
        {
            Push2(Pop1());
        }
    }
    printf("Dequeued %d\n",Pop2());
    count--;
    for(int i = 0 ; i < count ; i++)
    {
        Push1(Pop2());
    }
}

void Display()
{
    for(int i = 0 ; i < count ; i++)
    {
        printf("%d ",S1[i]);
    }
}

int main()
{
    Enqueue(72);
    Enqueue(73);
    Enqueue(117);
    Dequeue();
    Display();
    return 0;
}