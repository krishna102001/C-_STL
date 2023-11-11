#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL,*s;
void display(struct node *q)
{
    while (q)
    {
        printf("%d ", q->data);
        q = q->next;
    }
    printf("\n");
}

void concat(struct node *l, struct node *q)
{
    while (l->next!=NULL)
    {
        l = l->next;
    }
    l->next =q;
}
int main()
{
    int num, i;
    struct node *newnode, *temp, *secnode, *temp0;
    printf("How many elements you want to add : ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the DATA : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("How many elements you want to add : ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        secnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the DATA : ");
        scanf("%d", &secnode->data);
        secnode->next = NULL;
        if (s == NULL)
        {
            s = temp0 = secnode;
        }
        else
        {
            temp0->next = secnode;
            temp0 = secnode;
        }
    }
    display(head);
    display(s);
    concat(head,s);
    display(head);
    free(s);
}