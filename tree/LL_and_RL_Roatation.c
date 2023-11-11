#include<stdio.h>
#include<stdlib.h>
#include "queue.h"
struct tree {
    struct tree *lchild;
    int data;
    struct tree *rchild;
}*root;
void inorder(struct tree *t)
{
    if (t)
    {
        inorder(t->lchild);
        printf("%d ", t->data);
        inorder(t->rchild);
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
struct tree* search(struct tree *t,int key){
    if (t!=NULL){
        while (t){
            if (t->data==key)
            {
                return t;
            }
            else if (t->data<key)
            {
                t=t->rchild;
            }
            else{
                t=t->lchild;
            }
        }
    }
    else{
        return NULL;
    }
}
void insert(struct tree *t,int key){
    struct tree *r,*p;
    while (t)
    {
        r=t;
        if(t->data==key){
            return;
        }
        if (t->data<key)
        {
            t=t->rchild;
        }
        else{
            t=t->lchild;
        }   
    }
    p=(struct tree*)malloc(sizeof(struct tree));
    p->data=key;
    p->lchild=p->rchild=NULL;
    if (r->data<key)
    {
        r->rchild=p;
    }
    else{
        r->lchild=p;
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
struct tree* inpre(struct tree *t){
    while (t&&t->rchild)
    {
        t=t->rchild;
    }
    return t;
}
struct tree* insucc(struct tree *t){

    while (t&&t->lchild)
    {
        t=t->lchild;
    }
    return t;
}
struct tree* delete(struct tree *t,int key){
    struct tree *p,*q;
    if (t==NULL)
    {
        return NULL;
    }
    if(t->lchild==NULL && t->rchild==NULL){
        if (t==root)
        {
            root=NULL;
        }
        free(t);
        return NULL;
    }
    if (t->data<key)
    {
        t->rchild=delete(t->rchild,key);
    }
    else if (t->data>key)
    {
        t->lchild=delete(t->lchild,key);
    }
    else{
        if(height(p->lchild)>height(p->rchild)){
            q=inpre(p->lchild);
            p->data=q->data;
            p->lchild=delete(p->lchild,q->data);
        }
        else{
            q=insucc(p->rchild);
            p->data=q->data;
            p->rchild=delete(p->rchild,q->data);
        }
    }
    return t;
}

int main(){
    int element;
    struct queue l;
    struct tree *newtree ,*p;
    l.size=100;
    l.forward=l.rear=-1;
    l.address = (struct tree **)malloc(sizeof(struct tree) * l.size);
    root = (struct tree *)malloc(sizeof(struct tree));
    printf("Enter The Root Value : ");
    scanf("%d",&root->data);
    root->lchild=root->rchild=NULL;
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
    inorder(root);
    printf("\n");
    insert(root,5);
    inorder(root);
    printf("\n");
    delete(root,5);
    inorder(root);
    printf("\n");
}
