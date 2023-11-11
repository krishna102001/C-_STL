#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char *s;
};

void push(struct stack *t, char data)
{
    t->s[t->top = t->top + 1] = data;
}

char pop(struct stack *p)
{
    char t = p->s[p->top];
    p->s[p->top] = 0;
    p->top--;
    return t;
}

int isempty(struct stack q)
{
    if (q.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isMatchingPair(char character1, char character2)
{
    if (character1 == '(' && character2 == ')')
        return 1;
    else if (character1 == '{' && character2 == '}')
        return 1;
    else if (character1 == '[' && character2 == ']')
        return 1;
    else
        return 0;
}
 
int isbalanced(char *arr)
{
    struct stack st;
    st.size = strlen(arr);
    st.top = -1;
    st.s = (char *)malloc(st.size);
    char x;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
        {
            push(&st, arr[i]);
        }
        else if (arr[i] == ')' || arr[i] == ']' || arr[i] == '}')
        {
            if (isempty(st))
            {
                return 0;
            }
            else if (!isMatchingPair(pop(&st),arr[i]))
            {
                return 0;
            }
            
        }
    }
    if (isempty(st))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int r;
    char arr[100];
    printf("Enter The Expression : ");
    scanf("%s", &arr);
    r = isbalanced(arr);
    if (r == 1)
    {
        printf("balanced\n");
    }
    else
    {
        printf("not balanced\n");
    }
}