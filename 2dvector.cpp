#include<iostream>
using namespace std;
#include<vector>
void display(vector< vector<int> > t){
    for (int i = 0; i < t.size(); i++)
    {
        for (int j = 0; j <t[i].size(); j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    vector< vector<int> > vec(5,vector<int>(5));
    int x;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; i++)
        {
            cout<<"enter : ";
            cin>>x;
            vec[i][j]=x;
        }
        
    }
    
    /*
    for (int i = 0; i < 2; i++)
    {
        vector<int> temp;
        for (int j = 0; j <2; j++)
        {
            int x;
            cout<<"enter : ";
            cin>>x;
            temp.push_back(x);
        }
        vec.push_back(temp);
        temp.clear();
    }*/
    //display(vec);
}