#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    vector<int> a(5,404);
    
    vector<int> last(a);
    cout<<"Print last-->";  
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
        



    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    cout<<"Size-->"<<v.size()<<endl;
    cout<<"Front-->"<<v.front()<<endl;
    cout<<"Back-->"<<v.back()<<endl;

    cout<<"Before pop-->"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"After pop-->"<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size-->"<<v.size()<<endl;
    v.clear();
    cout<<"After clear size-->"<<v.size()<<endl;

    cout<<"Before clear Capacity-->"<<v.capacity()<<endl;
    v.clear();
    cout<<"After clear Capacity-->"<<v.capacity()<<endl;

    



}