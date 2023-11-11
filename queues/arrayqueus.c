#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int forward;
    int rear;
    int *q;
};

void display(struct queue r){
    for (int i = r.rear+1; i < r.size; i++)
    {
        printf("%d ",r.q[i]);
    }
    printf("\n");
}

void enqueue(struct queue *t,int x){
    t->q[t->forward+=1]=x;
}

void dequeue(struct queue *t){
    t->q[t->rear+=1]=0;
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
    display(qu);
}