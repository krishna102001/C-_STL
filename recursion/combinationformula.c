#include<stdio.h>
//simple function method
int fac(int z){
    if(z==0)
        return 1;
    else
        return z*fac(z-1);
}
int combine(int n,int r){
    int g,b,u;
    g=fac(n);
    b=fac(r);
    u=fac(n-r);
    return g/(b*u);
}
//recursion method
int c(int n,int r){
    if (r==0 || n==r)
    {
        return 1;
    }
    else{
        return c(n-1,r-1)+c(n-1,r);
    }
    
}
int main(){
    printf("%d\n",c(2,2));
}