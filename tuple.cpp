#include<iostream>
#include<tuple>
using namespace std;
int main(){
    tuple<int,int,int> t;
    t= make_tuple(1,2,3);
    int i,first,second;
    tie(i,first,second)=t;
    cout<<i<<" "<<first<<endl;
}