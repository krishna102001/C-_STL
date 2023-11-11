#include<stdio.h>
#include<stdlib.h>
void insert(int a[],int n){
    int temp,i=n;
    temp=a[i];
    while (i>1 && temp>a[i/2])
    {
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=temp; 
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void delete(int a[],int n){
    int x,i,j;
    x=a[1];
    a[1]=a[n];
    i=1,j=2*i;
    while (j<n-1)
    {
        if (a[j+1]>a[j])
        {
            j=j+1;
        }
        if(a[i]<a[j]){
            swap(&a[i],&a[j]);
            i=j;
            j=2*j;
        }
        else{
            break;
        }
    }
    a[n]=x;
}
int main(){
    int a[]={0,30,12,6,15,20,5,10};
    int i;
    for ( i = 2; i <=7; i++)
    {
        insert(a,i);
    }
    for ( i = 1; i <=7; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    delete(a,7);
    delete(a,6);
    delete(a,5);
    delete(a,4);
    delete(a,3);
    delete(a,2);
    delete(a,1);
    for ( i = 1; i <=7; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
