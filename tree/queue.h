#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int forward;
    int rear;
    struct tree **address; // double pointer taken to store the address of tree.
};
void enqueue(struct queue *k, struct tree *p)
{
    if ((k->forward + 1) % k->size == k->rear)
    {
        printf("Queue Is Full \n");
    }
    else
    {
        k->forward = (k->forward + 1) % k->size;
        k->address[k->forward] = p;
    }
};
struct tree * dequeue(struct queue *k){
    struct tree *t=NULL;
    if (k->forward==k->rear)
    {
        printf("queue is empty \n");
    }
    else{
        k->rear = (k->rear + 1) % k->size;
        t=k->address[k->rear];
    }
    return t;
}
int isempty(struct queue l){
    if (l.forward==l.rear)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}