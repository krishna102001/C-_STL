#include<iostream>
#include<map>
using namespace std;
void display(map<int,int> m){
    for (map<int,int>::iterator i = m.begin(); i != m.end(); i++)
    {
        cout<<i->first<<" : "<<i->second<<endl;
    }
}
void fdisplay(map<int,int> m){
    for (int i = 1; i <=m.size(); i++)
    {
        cout<<m[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int x,size;
    map<int,int> t;// map<data_type for key,data_type for value>
    cout<<"Enter How many Element you want to add : ";
    cin>>size;
    for (int i = 1; i <=size; i++)
    {
        cout<<"enter element : ";
        cin>>x;
        t[i]=x;
    }
    display(t);
    cout<<"size : "<<t.size()<<endl;
    fdisplay(t);
    cout<<"element at key 2 is : "<<t.at(2)<<endl;
    cout<<"map is empty or not : "<<t.empty()<<endl;
    cout<<"map can hold maximum size : "<<t.max_size()<<endl;
    t[2]=7;//direct method to modify the value at key
    display(t);
    map<int,int>::iterator it=t.begin(),l=t.end();
    ++it,--l;
    t.erase(it,l);
    cout<<"size : "<<t.size()<<endl;
    display(t);
    cout<<"size : "<<t.size()<<endl;
}