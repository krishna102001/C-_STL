#include<stdio.h>
#include<stdlib.h>
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

void Rdisplay(struct Node *p){
    if (p!=0)
    {
        Rdisplay(p->link);
        printf("%d ",p->data);
        
    }
    
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
    Rdisplay(head);
    printf("\n");

}