#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

// Stack structure to hold the operands
int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    stack[++top] = value;
}

// Pop function
int pop() {
    return stack[top--];
}

// Function to evaluate a postfix expression
int evaluatePostfix(char* expr) {
    int i;
    for(i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];

        // If the character is a digit, push it to the stack
        if(isdigit(ch)) {
            push(ch - '0');  // Convert char to integer
        } 
        else { // If the character is an operator
            int val2 = pop();
            int val1 = pop();

            switch(ch) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
                default: printf("Invalid operator!\n"); exit(1);
            }
        }
    }

    // The final result will be in the stack
    return pop();
}

int main() {
    char expr[MAX];

    printf("Enter a postfix expression: ");
    scanf("%s", expr);

    int result = evaluatePostfix(expr);

    printf("Result of postfix evaluation: %d\n", result);

    return 0;
}
