#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> p){
    for (vector<int>::iterator i = p.begin(); i != p.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> t;
    cout<<t.size()<<endl;//it will return size.
    t.assign(2,10);//it will assign the value. 2 is how many time, 10 is value which we want to assign.
    display(t);
    t.push_back(3);//it will store one value.
    display(t);
    t.pop_back();//it remove last element.
    display(t);
    t.insert(t.begin()+2,5);//it will insert the value parameter are iterator and value which we want to insert
    t.erase(t.begin()+2);//it will remove the element from given index.
    //t.clear();//it will clear all vector element .
    vector<int> p(4);
    int *x=p.data();
    *x=10;
    x++;
    *x=20;
    x++;
    *x=90;
    x++;
    *x=100;
    display(p);
    display(t);
    t.swap(p);//it swap two vector 
    display(p);
    display(t);
    cout<<t.size()<<endl;
}