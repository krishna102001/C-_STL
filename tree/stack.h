#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    struct tree **p;
};
void push(struct stack *l, struct tree *t)
{
    l->top = l->top + 1;
    l->p[l->top] = t;
}
struct tree *pop(struct stack *l)
{
    struct tree *t = NULL;
    if (l->top != -1)
    {
        t = l->p[l->top];
        l->p[l->top] = NULL;
        l->top--;
    }
    return t;
}
struct tree *stacktop(struct stack *l)
{
    return l->p[l->top];
}
int isfull(struct stack l)
{
    return l.top == l.size - 1;
}
int isempty(struct stack l)
{
    return l.top == -1;
}