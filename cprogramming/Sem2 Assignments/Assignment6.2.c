#include <stdio.h>
#include <stdlib.h>

// Structure for a polynomial term
struct Node {
    int coeff;
    int expo;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create a new node
struct Node* createNode(int coeff, int expo) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->expo = expo;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end
void insertTerm(int coeff, int expo) {
    struct Node* newNode = createNode(coeff, expo);
    
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Function to read polynomial
void readPolynomial() {
    int n, coeff, expo;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &expo);
        insertTerm(coeff, expo);
    }
}

// Function to display the polynomial
void displayPolynomial() {
    if (head == NULL) {
        printf("Polynomial is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Polynomial: ");
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->expo);
        if (temp->next != NULL && temp->next->coeff >= 0)
            printf(" + ");
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    readPolynomial();
    displayPolynomial();
    return 0;
}
