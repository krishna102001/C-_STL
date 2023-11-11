#include<iostream>
using namespace std;
int main(){
    
    //partial heap memory array
    int *p[3];
    p[0]=new int[5];
    p[1]=new int[5];
    p[2]=new int[5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"Enter";
            cout<<" :";
            cin>>p[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"output ";
            cout<<" :";
            cout<<p[i][j]<<endl;
        }
        
    }
    //fully heap memory array in c
    int **c;
    c=(int **)malloc(3*sizeof(int));
    c[0]=(int *)malloc(5*sizeof(int));
    c[1]=(int *)malloc(5*sizeof(int));
    c[2]=(int *)malloc(5*sizeof(int));
    
    //fully heap memory array in c++
    int **p;
    *p=new int[3];
    p[0]=new int[5];
    p[1]=new int[5];
    p[2]=new int[5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"Enter";
            cout<<" :";
            cin>>p[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"output ";
            cout<<" :";
            cout<<p[i][j]<<endl;
        }
        
    }

}