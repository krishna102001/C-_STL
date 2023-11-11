#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;    
}*first;
void create(int *a,int n){
    struct Node  *t , *last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for (int i = 1; i <= n; i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}
void Display(struct Node *q){
    while (q!=NULL)
    {
        printf("%d ",q->data);
        q=q->next;
    }
    printf("\n");
}
void Rdisplay(struct Node *p){
    if (p)
    {
        Rdisplay(p->next);
        printf("%d ",p->data);
    }
}
int main(){
    int a[]={2,8,6,6,10,5};
    create(a,5);
    Display(first);
    Rdisplay(first);
    printf("\n");
}