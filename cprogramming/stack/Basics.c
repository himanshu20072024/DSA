#include <stdio.h>
#define N 6

int stack[N];
int top = -1;

void push() 
{
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if (top == N - 1) 
    {
        printf("Stack Overflow\n");
    } else
    {
        top++;
        stack[top] = x;  // Corrected indexing
    }
}

void pop() {
    if (top == -1) 
    {
        printf("Stack Underflow\n");
    } else 
    {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void peek() 
{
    if (top == -1) 
    {
        printf("Stack is empty\n");
    } else 
    {
        printf("Top element: %d\n", stack[top]);
    }
}

void display() 
{
    if (top == -1) 
    {
        printf("Stack is empty\n");
    } else 
    {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) 
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() 
{
    int ch;
    do 
    {
        printf("\nEnter choice: 1 -> Push, 2 -> Pop, 3 -> Peek, 4 -> Display, 0 -> Exit\n");
        scanf("%d", &ch);

        switch (ch) 
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (ch != 0);

    return 0;
}
