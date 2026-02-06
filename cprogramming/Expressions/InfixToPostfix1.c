#include<stdio.h>
#include<ctype.h>
#define N 100
int main()
{
    int i = 0 ,j = 0;
    int top = -1;
    int stack[N];
    char postfix[N],infix[N];
    printf("Enter infix:");
    scanf("%s",&infix);
    while(infix[i] != '\0')
    {
        char ch = infix[i];
        if(isalnum(ch))
        {
            postfix[j++] = ch;
        }
        else if(ch == '(')
        {
            stack[++top] = ch;
        }
        else if(ch == ')')
        {
            while(stack[top] != -1 && stack[top] != '(')
            {
                postfix[j++] = stack[top--];
            }
            if(stack[top] == '(' && stack[top] != -1)
            {
                top--;
            }
        }
        else
        {
            int priority;
            if(ch == '^')  priority = 3;
            else if(ch == '*' || ch == '/') priority = 2;
            else if(ch == '+' || ch == '-') priority = 1;
            else priority = 0;

            while(top != -1)
            {
                int toppriority;
                if(stack[top] == '^')  toppriority = 3;
                else if(stack[top] == '*' || stack[top] == '/') toppriority = 2;
                else if(stack[top] == '+' || stack[top] == '-') toppriority = 1;
                else toppriority = 0;

                if(priority <= toppriority) 
                {
                    postfix[j++] = stack[top--];
                }   
                else break;
            }
            stack[++top] = ch;
        }
        i++;
    }

    while(top != -1)
    {
        postfix[j++] = stack[top--];
    }
    
    postfix[j] = '\0';
    
    printf(" postfix expression is: %s",postfix);
    return 0;
}