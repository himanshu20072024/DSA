#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to swap data of two nodes
void swap(struct Node* a, struct Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

// Function to sort the linked list using bubble sort
void bubbleSort(struct Node* head) {
    struct Node* i;
    struct Node* j = NULL;
    int swapped;

    if (head == NULL)
        return;

    do {
        swapped = 0;
        i = head;

        while (i->next != j) {
            if (i->data > i->next->data) {
                swap(i, i->next);
                swapped = 1;
            }
            i = i->next;
        }
        j = i;
    } while (swapped);
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
    // Creating linked list: 50 -> 20 -> 40 -> 10 -> 30
    struct Node* head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(40);
    head->next->next->next = newNode(10);
    head->next->next->next->next = newNode(30);

    printf("Original list: ");
    printList(head);

    bubbleSort(head);

    printf("Sorted list: ");
    printList(head);

    return 0;
}
