#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// a) Insert at the beginning
void insertAtBeginning(int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

// b) Insert at the end
void insertAtEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// c) Insert at a given position (1-based index)
void insertAtPosition(int data, int position) {
    if (position <= 0) {
        printf("Invalid position!\n");
        return;
    }

    if (position == 1) {
        insertAtBeginning(data);
        return;
    }

    struct Node* newNode = createNode(data);
    struct Node* temp = head;

    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// d) Insert after a specific element
void insertAfterElement(int target, int data) {
    struct Node* temp = head;
    while (temp != NULL && temp->data != target)
        temp = temp->next;

    if (temp == NULL) {
        printf("Element %d not found!\n", target);
        return;
    }

    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// e) Display from beginning to end
void displayForward() {
    struct Node* temp = head;
    printf("List (Start to End): ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// f) Display from end to beginning using recursion
void displayReverseHelper(struct Node* node) {
    if (node == NULL)
        return;
    displayReverseHelper(node->next);
    printf("%d -> ", node->data);
}

void displayReverse() {
    printf("List (End to Start): ");
    displayReverseHelper(head);
    printf("NULL\n");
}

// Menu
int main() {
    int choice, data, position, target;

    while (1) {
        printf("\n==== MENU ====\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at a position\n");
        printf("4. Insert after a specific element\n");
        printf("5. Display (Start to End)\n");
        printf("6. Display (End to Start)\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtBeginning(data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter position: ");
            scanf("%d", &position);
            insertAtPosition(data, position);
            break;
        case 4:
            printf("Enter target element: ");
            scanf("%d", &target);
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insertAfterElement(target, data);
            break;
        case 5:
            displayForward();
            break;
        case 6:
            displayReverse();
            break;
        case 7:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice. Try again!\n");
        }
    }

    return 0;
}
