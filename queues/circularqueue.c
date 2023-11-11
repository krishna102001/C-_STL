#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int forward;
    int rear;
    int *q;
};
void display(struct queue r){
    int i=r.forward+1;
    do
    {
        printf("%d ",r.q[i]);
        i=(i+1)%r.size;
    } while (i!=(r.rear+1)%r.size);
    printf("\n");
}
void enqueue(struct queue *t,int x){
    if ((t->rear+1)%t->size==t->forward)
    {
        printf("queue is full\n");
    }
    else{
        t->rear=(t->rear+1)%t->size;
        t->q[t->rear]=x;
    }
}
void dequeue(struct queue *t){
    if (t->forward==t->rear)
    {
        printf("queue is empty\n");
    }
    else{
        t->forward=(t->forward+1)%t->size;
        t->q[t->forward]=0;
    }
}
int main(){
    struct queue qu;
    int data;
    printf("Enter the size of queues : ");
    scanf("%d",&qu.size);
    qu.forward=qu.rear=-1;
    qu.q=(int*)malloc(qu.size);
    for (int i = 0; i < qu.size; i++)
    {
        printf("Enter Data : ");
        scanf("%d",&data);
        enqueue(&qu,data);
    }
    display(qu);
    dequeue(&qu);
    dequeue(&qu);
    dequeue(&qu);
    display(qu);
    enqueue(&qu,6);
    enqueue(&qu,7);
    display(qu);
}