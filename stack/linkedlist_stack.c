#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *top = NULL;

void push(struct node *p)
{
    p->next = top;
    top = p;
}

void pop()
{
    struct node *t;
    if (top == NULL)
    {
        printf("stack is Empty");
    }
    else
    {
        t = top;
        top = top->next;
        free(t);
    }
}

int peek(struct node *q, int pos)
{
    if (top == NULL)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            q = q->next;
        }
        return q->data;
    }
}

void stacktop(struct node *p)
{
    if (top)
    {
        printf("%d \n", p->data);
    }
    else
    {
        printf("stack is Null\n");
    }
}
void isempty(){
    if(top==NULL)
        printf("Stack Is Empty\n");
    else 
        printf("Stack is Not Empty\n");
}
void isfull(){
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL){
        printf("Stack is Full\n");
    }
    else{
        printf("stack is not full\n");
    }
}
void display(struct node *q)
{
    while (q != NULL)
    {
        printf("%d ", q->data);
        q = q->next;
    }
    printf("\n");
}
int main()
{
    int e;
    struct node *newnode;
    printf("How Many Element You Want To Add : ");
    scanf("%d", &e);
    for (int i = 0; i < e; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter The Data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (top == NULL)
        {
            top = newnode;
        }
        else
        {
            push(newnode);
        }
    }
    display(top);
    pop(top);
    display(top);
    printf(" Peek : %d \n", peek(top, 2));
    stacktop(top);
    isempty();
    isfull();
    pop(top);
    pop(top);
    display(top);
}