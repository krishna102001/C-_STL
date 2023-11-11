#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} *first = NULL;

void display(struct node *p)
{
    do
    {
        printf("%d ", p->data);
        p = p->link;
    } while(p!=first);
    printf("\n");
}
void insert(struct node *l,int index,int x){
    struct node *t , *q ;
    q=first;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->link=NULL;
    if (index==0)
    {
        while (q->link !=l)
        {
            q=q->link;
        }
        q->link=t;
        t->link=first;
        first=t;
    }
    else{
        for (int i = 0; i < index-1; i++)
        {
            q=q->link;
        }
        t->link=q->link;
        q->link=t;
    }
}

void delete(struct node *p,int pos){
    struct node *r,*q;
    r=q=first;
    if (pos==1)
    {
        while (q->link!=p)
        {
            q=q->link;
        }
        first=first->link;
        q->link=first;
        free(r);
    }
    else if(pos>0){
        for (int i = 0; i <pos-2; i++)
        {
            q=q->link;
        }
        r=q->link;
        q->link=r->link;
        r->link=NULL;
        free(r);
    }
    
}

int count(struct node *o){
    int c=0;
    do
    {
        c++;
        o=o->link;
    } while (o!=first);
    return c;
}

int main()
{
    int i, num,elem,index;
    struct node *newnode, *temp;
    printf("How many elements you want to create ");
    scanf("%d", &num);
    if (num > 0)
    {
        for (i = 0; i < num; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("ENTER THE DATA : ");
            scanf("%d", &newnode->data);
            newnode->link = NULL;
            if (first == NULL)
            {
                first = temp = newnode;
            }
            else
            {
                temp->link = newnode;
                temp = newnode;
            }
        }
        temp->link = first;
    }
    display(first);
    printf("Enter the index : ");
    scanf("%d",&index);
    printf("Enter The Data : ");
    scanf("%d",&elem);
    insert(first,index,elem);
    display(first);
    printf("Enter the index : ");
    scanf("%d",&index);
    delete(first,index);
    display(first);
    printf("%d \n",count(first));
}
