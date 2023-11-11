/* THIS IS ALSO LIKE QUEUE FUNCTION BUT HERE WE CAN PUSH THE ELEMENT FROM BACK AND FRONT SIDE BOTH AND POPING THE ELEMENT 
WILL BE DONE BY BOTH FROM FRONT AND BACK */
#include<iostream>
#include<deque>
using namespace std;
//display function
void display(deque<int> k){
    for (deque<int>::iterator i=k.begin();i!=k.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}
//main function
int main(){
    int n;
    cout<<"Enter the size of deque : ";
    cin>>n;
    deque<int> k;
    for (int i = 0; i <n; i++)
    {
        int x;
        cout<<"Enter the Element : ";
        cin>>x;
        k.push_back(x);
    }
    display(k);
    k.push_front(5);//adding element from first
    display(k);
    k.pop_back();//removing element from back
    display(k);
    k.pop_front();//removing element from front
    display(k);
    cout<<k.size()<<endl;//size of deque k
    cout<<k.empty()<<endl;//it will tell deque is empty or not
    k.erase(k.begin(),k.end()-2);//it will use to delete the element. it will use iterator
    display(k);//display function is created to print the element of deque.
    //k.clear();
    cout<<k.size()<<endl;
    cout<<k.max_size()<<endl;//it will show the maximum size of element can be store
    deque<int> temp; //created second deque 
    cout<<temp.size()<<endl;
    temp.swap(k);//it will swap the value of both deque
    display(temp);
    cout<<temp.size()<<endl;//it will return size of temp
}