#include<iostream>
#include<set>
using namespace std;
void display(set<int> k){
    for (auto i = k.begin(); i !=k.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    
}
int main(){
    set<int> t;
    t.insert(1);
    t.insert(10);
    t.insert(3);
    display(t);
    cout<<t.size()<<endl;
    int x,size;
    cout<<"size : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter : ";
        cin>>x;
        t.insert(x);
    }
    display(t);
    cout<<t.size()<<" "<<t.max_size()<<" "<<t.empty()<<endl;
    set<int>::iterator it,l;
    //it=t.begin(),l=t.end();
    //it++,l--;
    //t.erase(3);//erase(element) whichever element you want to remove
    display(t);
    //t.erase(it,l);//removing element with iterator
    display(t);
    cout<<t.count(5)<<endl;//find the element whether it is present or not.
    auto i=t.lower_bound(5);//it will return to iterator same key if not found then it will return greater element from key 
    cout<<*i<<endl;
    auto k=t.upper_bound(10);//it will return next to the key element if there is no element after key then it will return 0.
    cout<<*k<<endl;
    set<int> lop;
    lop.insert(3);
    lop.insert(5);
    lop.swap(t);
    display(lop);
    display(t);
    t.merge(lop);
    display(t);
}