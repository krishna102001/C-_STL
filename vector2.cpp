#include<iostream>
#include<vector>
using namespace std;
void push(vector<char> &t){
    int x;
    char c;
    cout<<"How many character you want to add : ";
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        cin>>c;
        t.push_back(c);
    }
}
void Rdisplay(vector<char> t){
    for (std::vector<char>::reverse_iterator i = t.rbegin(); i != t.rend(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}
void cdisplay(vector<char> t){
    for (std::vector<char>::const_iterator i = t.cbegin(); i != t.cend(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}
int main(){
    vector<char> st;
    push(st);
    Rdisplay(st);
    cdisplay(st);
}