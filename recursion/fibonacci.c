#include<stdio.h>
int f[10];
int fib(int x){
    if(x<=1){
        f[x]=x;
        return x;
    }
    else{
        if(f[x-2]==-1){
            f[x-2]=fib(x-2);
        }
        if(f[x-1]==-1){
            f[x-1]=fib(x-1);
        }
        return f[x-2]+f[x-1];
    }
}
int main(){
    int i;
    for ( i = 0; i < 10; i++)
    {
        f[i]=-1;
    }
    printf("%d \n",fib(6));
}