#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Node{
    int data;
    struct Node *link;
};

void Display(struct Node *temp){
    while (temp!=NULL)
    {
        printf("The Data Is : %d\n",temp->data);
        temp=temp->link;
    }
    
}

int len(struct Node *p){
    int c=0;
    while (p)
    {
        c++;
        p=p->link;
    }
    return c;
}
int midnode(struct Node *q){
    int t,r;
    t=len(q);
    r=floor(t/2);
    for (int i = 0; i < r; i++)
    {
        q=q->link;
    }
    return q->data;
    
}
int main(){
    struct Node *head=NULL,*last,*newnode;
    int n;
    printf("How Many Data You Want To Store : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter The Data : ");
        scanf("%d",&(newnode->data));
        newnode->link=NULL;
        if (head==0)
        {
            head=last=newnode;
        }
        else{
            last->link=newnode;
            last=newnode;
        }
    }
    Display(head);
    printf("\n");
    printf("middle node elements is : %d\n",midnode(head));
}