#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

// Stack operations
void push1(int x) {
    if (top1 == MAX - 1) {
        printf("Stack1 Overflow\n");
        return;
    }
    stack1[++top1] = x;
}

int pop1() {
    if (top1 == -1) {
        printf("Stack1 Underflow\n");
        return -1;
    }
    return stack1[top1--];
}

void push2(int x) {
    if (top2 == MAX - 1) {
        printf("Stack2 Overflow\n");
        return;
    }
    stack2[++top2] = x;
}

int pop2() {
    if (top2 == -1) {
        printf("Stack2 Underflow\n");
        return -1;
    }
    return stack2[top2--];
}

// Queue operations
void Enqueue(int x) {
    push1(x);
    printf("Enqueued: %d\n", x);
}

void Dequeue() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
        return;
    }

    if (top2 == -1) {
        while (top1 != -1) {
            push2(pop1());
        }
    }

    int dequeued = pop2();
    if (dequeued != -1)
        printf("Dequeued: %d\n", dequeued);
}

int main() {
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Dequeue();
    Dequeue();
    Enqueue(40);
    Dequeue();
    Dequeue();
    Dequeue(); // Should show "Queue is empty"
    return 0;
}
