#include<iostream>
using namespace std;
#include<vector>
void push(vector<char> &t){
    int x;
    char y;
    cout<<"how many character you want to add : ";
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        cout<<"enter : ";
        cin>>y;
        t.push_back(y);
    }
}
void display(vector<char> t){
    for (vector<char>::iterator i = t.begin(); i != t.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}
void reverse(vector<char> &t){
    vector<char> k;
    for (std::vector<char>::iterator i = t.end()-1; i!=t.begin()-1; i--)
    {
        k.push_back(*i);
    }
    display(k);
}
void sum(vector<int> &t){
    int sum=0;
    while(!t.empty()){
        sum+=t.back();
        t.pop_back();
    }
    cout<<sum<<endl;
}
int main(){
    vector<char> st;
    push(st);
    display(st);
    reverse(st);
    cout<<"size of character array is : "<<st.size()<<endl;
    vector<int> p;
    for (int i = 0; i < 5; i++)
    {
        p.push_back(i);
    }
    sum(p);
}