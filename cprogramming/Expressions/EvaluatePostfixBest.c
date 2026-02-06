#include <stdio.h>
#define size 100

int main() {
    char postfix[size];
    int stack[size];
    int top = -1;
    int i = 0, x, y, result;

    printf("Enter the postfix expression: ");
    scanf("%s", postfix);

    while (postfix[i] != '\0') {
        char ch = postfix[i];
        if (ch >= '0' && ch <= '9') {
            stack[++top] = ch - '0';
        } else {
            y = stack[top--];
            x = stack[top--];

            if (ch == '+')
                result = x + y;
            else if (ch == '-')
                result = x - y;
            else if (ch == '*')
                result = x * y;
            else if (ch == '/')
                result = x / y;
            else if (ch == '%')
                result = x % y;

            stack[++top] = result;
        }
        i++;
    }

    printf("Result = %d\n", stack[top]);
    return 0;
}