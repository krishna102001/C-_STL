#include<iostream>
#include<unordered_map>
using namespace std;
void display(unordered_map<int,int>k){
    for (auto i:k)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main(){
    unordered_map<int,int> m;
    int x,count;
    cout<<"enter the size of map ";
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        cout<<"enter : ";
        cin>>x;
        m[i]=x;
    }
    display(m);
}