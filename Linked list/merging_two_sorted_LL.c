#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *link;
} *first = NULL, *second = NULL;

void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("\n");
}

struct node *mergesort(struct node *p, struct node *q)
{
    struct node *last, *third;
    if (p->data < q->data)
    {
        last = third = first;
        p = p->link;
        last->link = NULL;
    }
    else
    {
        last = third = second;
        q = q->link;
        last->link = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->link = p;
            last = p;
            p = p->link;
            last->link = NULL;
        }
        else
        {
            last->link = q;
            last = q;
            q = q->link;
            last->link = NULL;
        }
    }
    if (p)
    {
        last->link = p;
    }
    else
    {
        last->link = q;
    }
    return third;
}

int main()
{
    struct node *ftemp, *firstnode, *secondnode, *stemp, *r;
    int num1, num2, i;
    printf("How many element you want to add in first linked list : ");
    scanf("%d", &num1);
    for (i = 0; i < num1; i++)
    {
        firstnode = (struct node *)malloc(sizeof(struct node));
        printf("ENTER THE DATA FOR FIRST LINKED LIST : ");
        scanf("%d", &firstnode->data);
        firstnode->link = NULL;
        if (first == NULL)
        {
            first = ftemp = firstnode;
        }
        else
        {
            ftemp->link = firstnode;
            ftemp = firstnode;
        }
    }
    printf("How many element you want to add in second linked list : ");
    scanf("%d", &num2);
    for (i = 0; i < num2; i++)
    {
        secondnode = (struct node *)malloc(sizeof(struct node));
        printf("ENTER THE DATA FOR SECOND LINKED LIST : ");
        scanf("%d", &secondnode->data);
        secondnode->link = NULL;
        if (second == NULL)
        {
            second = stemp = secondnode;
        }
        else
        {
            stemp->link = secondnode;
            stemp = secondnode;
        }
    }
    display(first);
    display(second);
    r = mergesort(first, second);
    display(r);
}