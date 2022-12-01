#include <stdio.h>
#include <string.h>
void push(char stack[], int *top, char X);
char pop(char stack[], int *top);
int main()
{
    char stack[20];
    int top = -1;
    char str[20], t;
    int i, f = 1;
    printf("Enter a string=");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            push(stack, &top, str[i]);
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (top == -1)
                f = 0;
            else
            {
                t = pop(stack, &top);
                if (str[i] == ')' && (t == '[' || t == '{'))
                    f = 0;
                if (str[i] == '}' && (t == '(' || t == '['))
                    f = 0;
                if (str[i] == ']' && (t == '{' || t == '('))
                    f = 0;
            }
        }
    }
    if (top >= 0)
        f = 0;
    if (f == 0)
        printf("Unbalanced\n");
    else
        printf("Balanced\n");
    return 0;
}
void push(char stack[], int *top, char X)
{
    *top = *top + 1;
    stack[*top] = X;
}
char pop(char stack[], int *top)
{
    char X;
    X = stack[*top];
    *top = *top - 1;
    return X;
}
