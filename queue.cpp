#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> t){
    while (!t.empty())
    {
        cout<<t.front()<<" ";
        t.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    int x,size;
    cout<<"How many element you want to add : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the element : ";
        cin>>x;
        q.push(x);
    }
    display(q);
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    queue<int> p;
    p.swap(q);
    display(p);
}