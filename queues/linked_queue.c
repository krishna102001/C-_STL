#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
} *forward = NULL, *rear = NULL, *first = NULL;

void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    if (first == NULL)
    {
        first = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    if (forward == rear)
    {
        printf("queue is empty");
    }
    else
    {
        forward = first;
        first = first->next;
        free(forward);
    }
}

int main()
{
    enqueue(5);
    enqueue(6);
    enqueue(1);
    enqueue(2);
    enqueue(9);
    display(first);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display(first);
}
