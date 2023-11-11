#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> >operati;
    int x;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"enter : ";
            cin>>x;
            operati[i][j]=x;
        }
    } 
    cout<<operati.size()<<endl;
    return 0;
}