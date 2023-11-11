#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first = NULL;

void display(struct node *t)
{
    while (t)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int check(struct node *loop)
{
    struct node *fast, *slow;
    fast = slow = loop;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow && fast && slow != fast);
    if (slow == fast)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int count(struct node *p)
{
    int r = 0;
    while (p)
    {
        r++;
        p = p->next;
    }
    return r;
}

void create(struct node *p)
{
    struct node *q = p;
    int l;
    printf("At which index You want create loop ");
    scanf("%d", &l);
    if (l > 0 && l < count(p))
    {
        for (int i = 0; i < l; i++)
        {
            q = q->next;
        }
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = q;
    }
}

int main()
{
    struct node *temp, *newnode;
    int i, num;
    printf("How many of element you want to add ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter The Data :");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (first == 0)
        {
            first = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    create(first);
    //display(first);
    i = check(first);
    if (i == 1)
    {
        printf("LOOP EXIST IN LINKED LIST \n");
    }
    else
    {
        printf("LOOP NOT EXIST \n");
    }
}
