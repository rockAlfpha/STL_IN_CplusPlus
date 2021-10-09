#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int, string> m;

    m.insert({1, "sourav"});
    m.insert({2, "rahul"});
    m.insert({3, "samir"});
    m.insert({4, "ranjan"});


    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    cout<<"Finding 3-->"<<m.count(3)<<endl;
    m.erase(3);
    cout<<"After ersae"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(2);
    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }




}