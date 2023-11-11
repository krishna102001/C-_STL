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
void pop(struct stack *p)
{
    p->s[p->top] = 0;
    p->top--;
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
int isbalanced(char *arr)
{
    struct stack st;
    st.size = strlen(arr);
    st.top = -1;
    st.s = (char *)malloc(st.size);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == '(')
        {
            push(&st, arr[i]);
        }
        else if (arr[i] == ')')
        {
            if (isempty(st))
            {
                return 0;
            }
            pop(&st);
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