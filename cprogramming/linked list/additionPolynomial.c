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

// Function to add two polynomials
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;  // The result polynomial (sum of poly1 and poly2)
    struct Node *p1 = poly1, *p2 = poly2;

    while (p1 != NULL && p2 != NULL) {
        // If exponent of p1 is greater, add it to the result
        if (p1->exp > p2->exp) {
            insertTerm(&result, p1->coeff, p1->exp);
            p1 = p1->next;  // Move to the next term in poly1
        }
        // If exponent of p2 is greater, add it to the result
        else if (p1->exp < p2->exp) {
            insertTerm(&result, p2->coeff, p2->exp);
            p2 = p2->next;  // Move to the next term in poly2
        }
        // If both exponents are equal, add the coefficients and insert
        else {
            int sumCoeff = p1->coeff + p2->coeff;
            if (sumCoeff != 0)  // We don't insert terms with a coefficient of 0
                insertTerm(&result, sumCoeff, p1->exp);
            p1 = p1->next;  // Move to the next term in poly1
            p2 = p2->next;  // Move to the next term in poly2
        }
    }

    // If any terms are left in poly1
    while (p1 != NULL) {
        insertTerm(&result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    // If any terms are left in poly2
    while (p2 != NULL) {
        insertTerm(&result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
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
    struct Node *poly1 = NULL, *poly2 = NULL;

    // Insert terms for the first polynomial: 5x^3 + 4x^2 + 2
    insertTerm(&poly1, 5, 3);
    insertTerm(&poly1, 4, 2);
    insertTerm(&poly1, 2, 0);

    // Insert terms for the second polynomial: 3x^3 + 6x^2 + 1
    insertTerm(&poly2, 3, 3);
    insertTerm(&poly2, 6, 2);
    insertTerm(&poly2, 1, 0);

    // Print the polynomials
    printf("Polynomial 1: ");   
    printPoly(poly1);
    printf("Polynomial 2: ");
    printPoly(poly2);

    // Add the polynomials
    struct Node* result = addPolynomials(poly1, poly2);

    // Print the resulting polynomial
    printf("Sum of Polynomials: ");
    printPoly(result);

    return 0;
}
