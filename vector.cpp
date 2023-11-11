#include<iostream>
#include<vector>
using namespace std;
void displaybegin(vector<int> t){
    for (vector<int>::iterator i=t.begin(); i != t.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    
}
void display(vector<int> t){
    for (int i = 0; i < t.size(); i++)
    {
        cout<<t[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> r;
    int x;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter : ";
        cin>>x;
        r.push_back(x);
    }
    display(r);
    cout<<r.size()<<endl;
    r.pop_back();
    display(r);
    cout<<r.size()<<endl;
    r.push_back(5);
    displaybegin(r);
}