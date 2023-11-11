//LIST STL is a doubly linked list we can perform all the task of doubly linked list.
#include<iostream>
#include<list>
using namespace std;
//display function 
void display(list<int> k){
    for (list<int>::iterator i = k.begin(); i != k.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}
//size function
int size(list<int> k){
    return k.size();
}
//main function
int main(){
    list<int> l;
    int x,y;
    cout<<"Enter the Size of Linked list : ";
    cin>>x;//taking value for how many element we want to enter
    for (int i = 0; i < x; i++)
    {
        cout<<"Enter the Element : ";
        cin>>y;
        l.push_back(y);
    }
    display(l);//it will print all the element
    l.reverse();//it will reverse all the element
    display(l);
    l.sort();
    display(l);
    l.push_front(10);//it will push the element from front size
    display(l);
    cout<<"Size : "<<size(l)<<endl;//it will print the how many element is present in list.
    l.pop_back();//removing the element from back side
    l.pop_front();//removing the element from front side
    cout<<l.max_size()<<endl;//it will print the size of elements it can hold
    display(l);
    cout<<"SIZE : "<<size(l)<<endl;
    l.clear();//it will clear all the elements
    cout<<"size : "<<size(l)<<endl;
    cout<<l.empty()<<endl;//it will check element is present or not
    l.push_front(10);
    l.push_back(9);
    l.push_back(5);
    l.push_front(3);
    display(l);
    list<int>::iterator i;//it is iterator method
    list<int>::iterator j=l.begin();
    //l.insert(j+1,10); here it will throw a error because it is linked list it cannot iterate like array ,vector,deque
    i=l.end();
    l.insert(i,1);//it will insert at back only one time
    l.insert(i,4,1);//it will insert at back 4 time (iterator,count,element) here count is how many time we want add the element
    display(l);
    cout<<l.front()<<endl;//it will print first value
    cout<<l.back()<<endl;//it will print last value
    //l.erase(l.begin(),l.end());//it will delete all the element
    //display(l);
    list<int> new_l ;
    new_l.push_back(1);
    new_l.push_back(2);
    new_l.push_back(3);
    new_l.push_back(5);
    new_l.push_back(6);
    display(new_l);
    //++j;
    //l.splice(j,new_l);//splice is used to transfer the element from one list to another at specified space "j" is here iterator
    // iterator will be point that list only in which we want to transfer the element.
    //new_l is list and its all element will be tranfered and size will become zero.
    l.sort();
    new_l.merge(l);//it is used to merge the two sorted list.if list is not sorted then sort it first then use merge function
    //display(l);
    cout<<new_l.size()<<endl;
    display(new_l);
}