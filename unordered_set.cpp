//In unordered set it also doesn't store duplicate of element .To store duplicate element we use unordered_mutliset<data_type>
#include<iostream>
#include<unordered_set>
using namespace std;
void display(unordered_set<int> t){
    for (unordered_set<int>::iterator i=t.begin(); i !=t.end(); i++)
    {
        cout<<*i<<" ";   
    }
    cout<<endl;
}
int main(){
    unordered_set<int> k;
    int x,count;
    cout<<"enter : ";
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        cout<<"enter the element : ";
        cin>>x;
        k.insert(x);
    }
    display(k); 
    cout<<"size : "<<k.size()<<endl;
}