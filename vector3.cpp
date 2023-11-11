#include<iostream>
#include<vector>
void push(std::vector<int> &t){
    for (int i = 1; i < 6; i++)
    {
        t.push_back(i*3);
    }
}
void display(std::vector<int> t){
    for (std::vector<int>::iterator i = t.begin(); i !=t.end(); i++)
    {
        std::cout<<*i<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    std::vector<int> p;
    push(p);
    display(p);
    std::cout<<p[2]<<std::endl;//access at given index
    std::cout<<p.front()<<std::endl;//access first element
    std::cout<<p.back()<<std::endl;//access last element
    std::cout<<p.at(4)<<std::endl;//access at given index
    std::vector<int> z(6);//without assigning size it will not work .it will give segmentation faults.
    int *k=z.data();//assign value to vector
    *k=10;//assign value at index 0
    ++k;//increase the value of index . now it will point to index 1.
    *k=20;//assign value at index 1
    k++;
    *k=40;
    k[3]=30;//assign value at index 3. 2 will add with index 1 so it will at index 3
    display(z);
    std::cout<<z.size()<<std::endl;
}