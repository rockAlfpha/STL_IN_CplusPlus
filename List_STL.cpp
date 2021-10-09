#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> n(5, 200);
    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    

    l.push_back(2);
    l.push_front(1);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    int size = l.size();
    cout<< "Size is-->"<<size<<endl;


}