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
//Sum Function Created to sum all data
int sum(struct node *l){
    if (l==NULL){
        return 0;
    }
    else{
        return l->data+sum(l->next);
    }
}
//Maximum Function Created to Get Max value
int max(struct node *p){
    int t=INT_MIN;
    while(p!=NULL){
        if(t>p->data){
            p=p->next;
        }
        else if(t< p->data){
            t=p->data;
            p=p->next;
        }
    }
    return t;
}
//Minimum Function Created to get Min Value
int min(struct node *p){
    int t=0;
    if(p==NULL){
        return INT_MAX;;
    }
    else{
        t=min(p->next);
        if(t<p->data){
            return t;
        }
        else{
            return p->data;
        }
    }
}
//Linear Search Function Created
struct node* Lsearch(struct node*q,int value){
    while(q!=0){
        if(value==q->data){
            return q;
        }
        else{
            q=q->next;
        }
    }
    return NULL;
}

//Insert Function created to add first place
void insert(struct node *modl,int value,int index){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=value;
    if(index==0){
        p->next=first;
        first=p;
    }
    else{
        for(int i=0;i<index-1;i++){
            modl=modl->next;
        }
        p->next=modl->next;
        modl->next=p;
    }
}

//inserting in sorted linkedlist
void insort(struct node *p,int x){
    struct node *l,*t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;
    l=first;
    if (first==NULL)
    {
        first=t;
    }
    while (p && p->data<x)
    {
        l=p;
        p=p->next;
    }
    if (p==first)
    {
        t->next=first;
        first=t;
    }
    else{
        t->next=l->next;
        l->next=t;
    }
    

}
//Delete Function Created
void delete(struct node *p,int index){
    int x;
    struct node *q;
    if (index==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        free(q);
    }
    else{
        for (int i = 0; i <index-1; i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
    }
}
// Removing Dupicate 
void dup(struct node *p){
    struct node *q;
    q=p->next;
    while (q)
    {
        if (p->data != q->data)
        {
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
    
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
    /*
    printf("No. of Node : %d\n",count(first));
    printf("Sum of all element : %d\n",sum(first));
    printf("Maximum Value is : %d\n",max(first));
    printf("Minimum Value is : %d\n",min(first));
    printf("Enter the No. to Find :");
    scanf("%d",&find);
    struct node *t;
    t=Lsearch(first,find);
    if(t==NULL){
        printf("NOT FOUND !!!\n");
    }
    else{
        printf("The address : %d\n",t);
    }
    //printf("Enter the DATA YOU WANT TO insert : ");
    //scanf("%d",&r);*/
    //printf("Enter the index where you want to insert : ");
    //scanf("%d",&find);
    //insert(first,r,find);
    //insort(first,2);
    //delete(first,find);
    dup(first);
    display(first);
}
