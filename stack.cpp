#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> t){
    stack<int> p;
    int x;
    p.swap(t);
    for (int i = 0; !p.empty(); i++)
    {
        x=p.top();
        cout<<x<<" ";
        p.pop();
    }
    cout<<endl;
}
void fdisplay(stack<int> t){
    int x;
    for (int i = 0; !t.empty(); i++)
    {
        x=t.top();
        cout<<x<<" ";
        t.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    int x,size;
    cout<<"Enter the how much element you want to add : ";
    cin>>size;
    for(int i=1;i<=size;i++){
        cout<<"Enter the element : ";
        cin>>x;
        st.push(x);
    }
    display(st);
    cout<<"size : "<<st.size()<<endl;
    st.pop();
    fdisplay(st);
    cout<<"size : "<<st.size()<<endl;
    for (int i = 0; !st.empty(); i++)
    {
        st.pop();
    }
    cout<<"stack is empty ? : "<<st.empty()<<endl;
}