#include <stdio.h>
#include <stdlib.h>
struct tree
{
    struct tree *lchild;
    int data;
    struct tree *rchild;
} * root;
struct queue
{
    int size;
    int forward;
    int rear;
    struct tree **q;
};

void enqueue(struct queue *q, struct tree *t)
{
    q->q[q->forward] = t;
    q->forward = q->forward + 1;
}
struct tree *dequeue(struct queue *t)
{
    struct tree *p=NULL;
    if (t->forward==t->rear)
    {
        printf("queue is empty\n");
    }
    else{
        p = t->q[t->rear];
        t->q[t->rear] = 0;
        t->rear+=1;
    }
    return p;
}
int isempty(struct queue q)
{
    return q.forward == q.rear;
}
void preorder(struct tree *t){
    if (t)
    {
        printf("%d ",t->data);
        preorder(t->lchild);
        preorder(t->rchild);
    }
}
int main()
{
    struct tree *p,*newnode;
    struct queue q;
    int data;
    q.size = 100;
    q.forward = q.rear = 0;
    q.q = (struct tree **)malloc(q.size);
    root = (struct tree *)malloc(sizeof(struct tree));
    printf("Enter the Root value : ");
    scanf("%d", &root->data);
    root->lchild = root->rchild;
    enqueue(&q, root);
    while (!isempty(q))
    {
        p = dequeue(&q);
        printf("Want to add Left child %d : ",p->data);
        scanf("%d", &data);
        if (data != -1)
        {
            newnode = (struct tree *)malloc(sizeof(struct tree));
            newnode->data = data;
            newnode->lchild=newnode->rchild=NULL;
            p->lchild = newnode;
            enqueue(&q, newnode);
        }
        printf("Want to add right child %d : ",p->data);
        scanf("%d", &data);
        if (data != -1)
        {
            newnode = (struct tree *)malloc(sizeof(struct tree));
            newnode->data = data;
            newnode->lchild=newnode->rchild=NULL;
            p->rchild = newnode;
            enqueue(&q, newnode);
        }
    }
    preorder(root);
    printf("\n");
}
