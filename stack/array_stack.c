#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};

void push(struct stack *p,int data){
    if (p->top==p->size-1)
    {
        printf("Stack is full \n");
    }
    else{ 
        p->s[p->top=p->top+1]=data;
    }
}

void pop(struct stack *p){
    if (p->top==-1)
    {
        printf("Stack Is Empty \n");
    }
    else{
        p->s[p->top]=0;
        p->top--;
    }   
}

int peek(struct stack p,int pos){
    int index;
    index=p.top-pos+1;
    return p.s[index];
}

void stacktop(struct stack p){
    if (p.top==-1)
    {
        printf("Stack Is Empty\n");
    }
    else{
        printf("Top Value at top %d is : %d \n",p.top,p.s[p.top]);
    }
}
int isempty(struct stack q){
    if (q.top==-1)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int isfull(struct stack l){
    if (l.top==l.size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
void display(struct stack q){
    for (int  i = 0; i <= q.top; i++)
    {
        printf("%d ",q.s[i]);
    }
    printf("\n");
}

int main(){
    struct stack stack1;
    int data,pos,i=0;
    printf("Enter The Size Of Stack : ");
    scanf("%d",&stack1.size);
    stack1.s=(int *)malloc(sizeof(stack1.size));
    stack1.top=-1;
    do
    {
        printf("Enter the Element : ");
        scanf("%d",&data);
        push(&stack1,data);
        printf("You want to add More Element then press 1 : ");
        scanf("%d",&i);
    } while (i==1);
    display(stack1);
    printf("Enter the Postion : ");
    scanf("%d",&pos);
    printf("Element is : %d \n",peek(stack1,pos));  
    stacktop(stack1);
    if (isempty(stack1))
    {
        printf("Stack is Not Empty\n");
    }
    else{
        printf("Stack is  Empty\n");
    }
    if (isfull(stack1))
    {
        printf("Stack is Full\n");
    }
    else{
        printf("Stack is Not Full\n");
    }
}