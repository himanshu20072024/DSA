#include <stdio.h>
#include <stdlib.h>

// Node structure for polynomial term
struct Node {
    int coeff;   // Coefficient of the term (e.g., 5 in 5x^3)
    int exp;     // Exponent of the term (e.g., 3 in 5x^3)
    struct Node* next; // Pointer to the next term in the list
};

// Function to create a new node with given coefficient and exponent
struct Node* newNode(int coeff, int exp) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));  // Allocate memory for the new node
    node->coeff = coeff;  // Set the coefficient
    node->exp = exp;      // Set the exponent
    node->next = NULL;    // Initially, the next pointer is NULL (end of list)
    return node;  // Return the newly created node
}

// Function to insert a new term into the polynomial list
void insertTerm(struct Node** head, int coeff, int exp) {
    struct Node* temp = newNode(coeff, exp);  // Create a new node for the term

    if (*head == NULL) {  // If the list is empty
        *head = temp;  // Set the new node as the head of the list
    } else {
        struct Node* current = *head;
        while (current->next != NULL)  // Traverse the list to find the last node
            current = current->next;
        current->next = temp;  // Link the new node at the end of the list
    }
}

// Function to print the polynomial in human-readable form
void printPoly(struct Node* head) {
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->exp);  // Print the coefficient and exponent
        if (head->next != NULL)  // If not the last term, print a plus sign
            printf(" + ");
        head = head->next;  // Move to the next term
    }
    printf("\n");
}

int main() {
    struct Node* poly = NULL;  // Initialize an empty polynomial

    // Insert terms for the polynomial 5x^3 + 4x^2 + 2
    insertTerm(&poly, 5, 3);  // 5x^3
    insertTerm(&poly, 4, 2);  // 4x^2
    insertTerm(&poly, 2, 0);  // 2x^0 (constant)

    // Print the polynomial
    printf("Polynomial is:\n");
    printPoly(poly);

    return 0;
}
