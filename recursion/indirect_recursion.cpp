#include<iostream>
using namespace std;
void fun1(int x);
void fun(int n){
    if(n>0){
        cout<<" ";
        cout<<n;
        fun1(n-1);
    }
}
void fun1(int x){
    if (x>0){
        cout<<" ";
        cout<<x;
        fun(x-1);
    }
}
int main(){
    fun(10);
    cout<<'\n';
}