#include <stdlib.h>
#include <stdio.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
} * first;

void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void insert(struct node *q, int elem, int index)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = elem;
    t->prev = NULL;
    if (index == 0)
    {
        t->next = q;
        q->prev = t;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = q->next;
        }
        t->next = q->next;
        t->prev = q;
        if (q->next)
        {
            q->next->prev = t;
        }
        q->next = t;
    }
}

void delete (struct node *p, int pos)
{
    struct node *t;
    t = first;
    if (pos == 1)
    {
        first = first->next;
        first->prev = NULL;
        free(t);
    }
    else if (pos > 1)
    {
        for (int i = 0; i < pos - 2; i++)
        {
            p = p->next;
        }
        t = p->next;
        if (t->next)
        {
            t->next->prev = p;
        }
        p->next = t->next;
        t->next = t->prev = NULL;
    }
}

void reverse(struct node *l)
{
    struct node *temp;
    while (l)
    {
        temp = l->next;
        l->next = l->prev;
        l->prev = temp;
        l=l->prev;
        if (l != NULL && l->next == NULL)
        {
            first = l;
        }
    }
}
int main()
{
    struct node *newnode, *temp;
    int num, i, num1, index;
    printf("How many Element You want to Create : ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter The Data : ");
        scanf("%d", &newnode->data);
        newnode->prev = newnode->next = NULL;
        if (first == NULL)
        {
            first = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
    display(first);
    /*
    printf("enter no. to insert : ");
    scanf("%d",&num1);
    printf("enter the index : ");
    scanf("%d",&index);
    insert(first,num1,index);
    display(first);
    printf("enter the index to delete : ");
    scanf("%d",&index);
    delete(first,index);*/
    reverse(first);
    display(first);
}