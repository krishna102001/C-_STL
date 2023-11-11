#include<iostream>
#include<queue>
using namespace std;
void display(priority_queue<int> t){
    while (!t.empty())
    {
        int x;
        x=t.top();
        cout<<x<<" ";
        t.pop();
    }
    cout<<endl;
}
int main(){
    priority_queue<int> p;
    int x,size;
    cout<<"Enter how many element you want to add : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element : ";
        cin>>x;
        p.push(x);
    }
    display(p);
    cout<<p.size()<<endl;
    p.pop();
    cout<<p.empty()<<endl;
    priority_queue<int> k;
    k.swap(p);
    display(k);
}