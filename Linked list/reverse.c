#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
// created node
struct node{
    int data;  //data will be store of integer type
    struct node *next; //In this its going to store the address of another node that will be of user defined data type that is struct node
}*first;

// Recursion Function created to display data

void display(struct node *p){
    if (p!=NULL)
    {
        printf("%d ",p->data);
        display(p->next);
    }
    
}
// Count Function Created to Count Node
int count (struct node *p){
    int c=0;
    while(p!=0){
        c+=1;
        p=p->next;
    }
    return c;
}
//reversing element
void rev(struct node *p){
    int a[count(first)],i=0;
    while (p)
    {
        a[i]=p->data;
        p=p->next;
        i++;
    }
    p=first;
    i--;
    while (p)
    {
        p->data=a[i--];
        p=p->next;
    }
}
//reversing link
void revlink(struct node *cur){
    struct node *prev ,*forw;
    prev=NULL;
    forw=cur->next;
    while (cur)
    {
        forw=cur->next;
        cur->next=prev;
        prev=cur;
        cur=forw;
    }
    first=prev;
}
//main fuction
int main(){
    int num,i,find,r;
    struct node *newnode,*temp;
    printf("How many Element You want to ADD : ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter The Data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if (first==0)
        {
            first=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        
    }
    display(first);
    printf("\n");
    revlink(first);
    display(first);
    printf("\n");
}