#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
struct tree
{
    struct tree *lchild;
    int data;
    struct tree *rchild;
};
void preorder(struct tree *t)
{
    if (t)
    {
        printf("%d ", t->data);
        preorder(t->lchild);
        preorder(t->rchild);
    }
}
void inorder(struct tree *t)
{
    if (t)
    {
        inorder(t->lchild);
        printf("%d ", t->data);
        inorder(t->rchild);
    }
}
void postorder(struct tree *t)
{
    if (t)
    {
        inorder(t->lchild);
        inorder(t->rchild);
        printf("%d ", t->data);
    }
}
/*void levelorder(struct tree *l){
    struct queue q;
    q.size=100;
    struct tree *t;
    printf("%d ",l->data);
    enqueue(&q,l);
    while (!isempty(q))
    {
        t=dequeue(&q);
        if (t->lchild)
        {
            printf("%d ",t->lchild->data);
            enqueue(&q,t->lchild);
        }
        if (t->rchild)
        {
            printf("%d ",t->rchild->data);
            enqueue(&q,t->rchild);
        }
    }

}*/
int count(struct tree *t)
{
    int x, y;
    x = y = 0;
    if (t)
    {
        x = count(t->lchild);
        y = count(t->rchild);
        return x + y + 1;
    }
    else
    {
        return 0;
    }
}
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int height(struct tree *t)
{
    if (t == NULL)
    {
        return 0;
    }
    int h1 = height(t->lchild);
    int h2 = height(t->rchild);
    int r = max(h1, h2) + 1;
    return r;
}
int main()
{
    int element;
    struct queue l;
    struct tree *root, *p, *newtree;
    printf("Enter The Size of Queue : ");
    scanf("%d", &l.size);
    l.forward = l.rear = -1;
    l.address = (struct tree **)malloc(sizeof(struct tree)*l.size);
    root = (struct tree *)malloc(sizeof(struct tree));
    printf("Enter The Root Value : ");
    scanf("%d", &root->data);
    root->lchild = root->rchild = NULL;
    enqueue(&l, root);
    while (!isempty(l))
    {
        p = dequeue(&l);
        printf("Enter The left Child %d : ", p->data);
        scanf("%d", &element);
        if (element >= 0)
        {
            newtree = (struct tree *)malloc(sizeof(struct tree));
            newtree->data = element;
            newtree->lchild = newtree->rchild = NULL;
            p->lchild = newtree;
            enqueue(&l, newtree);
        }
        printf("Enter The right Child %d : ", p->data);
        scanf("%d", &element);
        if (element >= 0)
        {
            newtree = (struct tree *)malloc(sizeof(struct tree));
            newtree->data = element;
            newtree->lchild = newtree->rchild = NULL;
            p->rchild = newtree;
            enqueue(&l, newtree);
        }
    }
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    /*levelorder(root);
    printf("\n");*/
    printf("Total tree node : %d\n", count(root));
    printf("Height of Tree is : %d\n",height(root));
}
