#include<stdio.h>
#define N 6
int stack[N];
int top = -1;

void Push()
{
    int x;
    printf("Enter data:");
    scanf("%d", &x);
    if(top == N-1)
        printf("Overflow condition");
    else
    {
        top++;
        stack[x]=x; 
    }
}

void Pop()
{
    int item;
    if(top == -1)
        printf("Underflow");
    else
    {
        item = stack[top];
        top--;
    }
    printf("%d",item);
}

void Peek()
{
    if(top == -1)
        printf("Stack is empty");
    else
        printf("%d",stack[top]);
}

void Display()
{
    int i;
    for(i = top; i >= 0; i--)
    {
        printf("%d ",stack[i]);
    }
}

void main()
{
    int ch;
    do
    {
        printf("Enter choice 1 -> Push, 2 -> Pop, 3 -> Peek, 4 -> Display");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            {
                Push();
                break;
            }
            case 2:
            {
                Pop();
                break;
            }
            case 3:
            {
                Peek();
                break;
            }
            case 4:
            {
                Display();
                break;
            }
            default: 
                printf("Invalid choice");
        }
    }
    while(ch != 0);
}