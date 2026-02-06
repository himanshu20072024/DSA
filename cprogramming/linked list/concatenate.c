#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to concatenate two lists
void concatenate(struct Node* head1, struct Node* head2) {
    if (head1 == NULL) {
        head1 = head2;
        return;
    }

    struct Node* temp = head1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head2;
}

// Function to print list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Helper function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main() {
    // Creating first list: 10 -> 20 -> 30
    struct Node* head1 = newNode(10);
    head1->next = newNode(20);
    head1->next->next = newNode(30);

    // Creating second list: 40 -> 50 -> 60
    struct Node* head2 = newNode(40);
    head2->next = newNode(50);
    head2->next->next = newNode(60);

    printf("List1: ");
    printList(head1);

    printf("List2: ");
    printList(head2);

    concatenate(head1, head2);

    printf("After concatenation: ");
    printList(head1);

    return 0;
}
