/* ARRAY STL is not so used because of static in nature and it doesn't support 
push_back(),pop_back(),clear() function */
#include <iostream>
using namespace std;
#include <array>
int main()
{
    cout << "ARRAY STL IS ALWAYS A STATIC " << endl;
    array<int, 5> k;
    for (int i = 0; i < k.size(); i++)
    {
        int x;
        cout << "Enter the element : ";
        cin >> x;
        k[i] = x;
    }
    cout << "ARRAY : [ ";
    for (auto i : k)
    {
        cout << i << " ";
    }
    cout << "]" << endl;
    cout << k.front()<<endl;
    cout << k.back()<<endl;
    cout << k.size()<<endl;
    cout << k.empty()<<endl;
    k.fill(1);
    cout << "ARRAY : [ ";
    for (auto i : k)
    {
        cout << i << " ";
    }
    cout << "]" << endl;
}