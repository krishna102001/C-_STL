/*

SOME ERROR IN PROGRAM YET NOT FIXED :) !!!!!!

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct stack
{
    int size;
    int top;
    char *s;
};
int isoperand(char a)
{
    if (a == '+' || a == '-' || a == '*' || a == '/' || a == '%' || a == '^')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int pre(char a)
{
    if (a == '+' || a == '-')
    {
        return 1;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '%' || a == '^')
    {
        return 3;
    }
    return 0;
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
void push(struct stack *t, char x)
{
    t->s[t->top = t->top + 1] = x;
}
char pop(struct stack *t)
{
    char c = t->s[t->top];
    t->s[t->top] = 0;
    t->top--;
    return c;
}
char stacktop(struct stack st)
{
    return st.s[st.top];
}
char * convert(char *arr)
{
    struct stack st;
    st.size = strlen(arr);
    st.top = -1;
    st.s = new char[st.size];
    push(&st,'#');
    char *postfix = new char[st.size + 3];
    int i = 0, j = 0;
    while (arr[i] != '\0')
    {
        if (isoperand(arr[i]))
        {
            postfix[j++] = arr[i++];
        }
        else
        {
            if (pre(arr[i]) > pre(stacktop(st)))
            {
                push(&st, arr[i++]);
            }
            else
            {
                postfix[j++] = pop(&st);
            }
        }
    }
    while (!isempty(st))
    {
        postfix[j++] = pop(&st);
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char ar[10], *c;
    cout << "Enter The Expression : ";
    scanf("%d", &ar);
    c = convert(ar);
    printf("%s \n", c);
}
*/