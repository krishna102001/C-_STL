#include<iostream>
using namespace std;
int main(){
    pair<int,int> pair1,pair2;
    pair<int,string> pair3;
    pair1= make_pair(1,2);
    pair2= make_pair(2,3);
    pair3= make_pair(10,"hello krishna!!");
    cout<<"pair 1 : "<<pair1.first<<" , "<<pair1.second<<endl;
    cout<<"pair 3 : "<<pair3.first<<" , "<<pair3.second<<endl;
    pair1.swap(pair2);
    cout<<"pair 1 : "<<pair1.first<<" , "<<pair1.second<<endl;
    if(pair2.second==pair1.first){
        cout<<"true"<<endl;
    }
    else if(pair1==pair2){
        cout<<"true"<<endl;
    }
    pair<int,int> p;
    int x,y;
    cout<<"enter ";
    cin>>x;
    cout<<"enter ";
    cin>>y;
    p=make_pair(x,y);
    cout<<p.first<<" "<<p.second<<endl;
}