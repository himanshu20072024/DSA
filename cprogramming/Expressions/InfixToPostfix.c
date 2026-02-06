#include <stdio.h>
#include <ctype.h>
#define SIZE 100

int main() {
    char infix[SIZE], postfix[SIZE], stack[SIZE];
    int top = -1, i = 0, j = 0;

    printf("Enter the infix expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0') {
        char ch = infix[i];

        if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            stack[++top] = ch;
        } else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            if (top != -1 && stack[top] == '(') {
                top--;  // pop '('
            }
        } else { // operator
            int prec;
            if (ch == '^') prec = 3;
            else if (ch == '*' || ch == '/') prec = 2;
            else if (ch == '+' || ch == '-') prec = 1;
            else prec = 0;

            while (top != -1) {
                int topPrec;
                if (stack[top] == '^') topPrec = 3;
                else if (stack[top] == '*' || stack[top] == '/') topPrec = 2;
                else if (stack[top] == '+' || stack[top] == '-') topPrec = 1;
                else topPrec = 0;

                if (prec <= topPrec) {
                    postfix[j++] = stack[top--];
                } else {
                    break;
                }
            }
            stack[++top] = ch;
        }
        i++;
    }

    while (top != -1) {
        postfix[j++] = stack[top--];
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
