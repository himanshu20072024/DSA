#include <stdio.h>
#include <stdlib.h>  // For malloc() and free()

struct Queue {
    int size, cap;
    int* arr;
};

// Function to create a queue
struct Queue* createQueue(int c) {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->cap = c;
    q->size = 0;
    q->arr = (int*)malloc(c * sizeof(int));  // Allocate memory for the array
    return q;
}

// Function to check if the queue is full
int isFull(struct Queue* q) {
    return (q->size == q->cap);
}

// Function to check if the queue is empty
int isEmpty(struct Queue* q) {
    return (q->size == 0);
}

// Function to add an element to the queue
void enque(struct Queue* q, int x) {
    if (isFull(q)) return;
    q->arr[q->size] = x;  // Insert at the end
    q->size++;
}

// Function to remove an element from the queue
void deque(struct Queue* q) {
    if (isEmpty(q)) return;
    for (int i = 0; i < q->size - 1; i++) {
        q->arr[i] = q->arr[i + 1];
    }
    q->size--;  // Reduce size
}

// Function to get the front element
int getFront(struct Queue* q) {
    if (isEmpty(q)) return -1;
    return q->arr[0];
}

// Function to get the rear element
int getRear(struct Queue* q) {
    if (isEmpty(q)) return -1;
    return q->arr[q->size - 1];
}

// Function to free allocated memory
void freeQueue(struct Queue* q) {
    free(q->arr);  // Free the array
    free(q);       // Free the struct
}

int main() {
    struct Queue* q = createQueue(5);
    enque(q, 10);
    enque(q, 20);
    enque(q, 30);

    printf("Front: %d\n", getFront(q));
    printf("Rear: %d\n", getRear(q));

    deque(q);
    printf("Front after deque: %d\n", getFront(q));

    // Free allocated memory
    freeQueue(q);

    return 0;
}
