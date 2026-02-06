#include <stdio.h>
#include <stdlib.h>

// Structure for a stack node
struct Node 
{
    int data;
    struct Node* next;
};

// Top pointer to keep track of stack
struct Node* top = NULL;

// Function to push an element onto the stack
void push(int value) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) 
    {
        printf("Stack Overflow\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d pushed onto stack\n", value);
}

// Function to pop an element from the stack
void pop() 
{
    if (top == NULL) 
    {
        printf("Stack Underflow\n");
        return;
    }
    struct Node* temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
}

// Function to peek at the top element of the stack
void peek() 
{
    if (top == NULL) 
    {
        printf("Stack is empty\n");
    } else 
    {
        printf("Top element: %d\n", top->data);
    }
}

// Function to display the stack
void display() 
{
    if (top == NULL) 
    {
        printf("Stack is empty\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements: ");
    while (temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() 
{
    int choice, value;
    
    do 
    {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) 
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
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
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
