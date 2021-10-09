#include<iostream>
#include<array>
using namespace std;
int main()


{
    array<int, 4> a = {1, 2, 3, 4};
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<endl;
    }

    int size = a.size();
    cout<<"siz of array-->"<<size<<endl;
    cout<<"Element at index 2 -->"<<a.at(2)<<endl;
    cout<<"First element is-->"<<a.front()<<endl;
    cout<<"Last element is-->"<<a.back()<<endl;


}