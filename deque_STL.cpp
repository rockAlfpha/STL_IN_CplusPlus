#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d;
    d.push_back(2);
    d.push_front(1);

    cout<<"Front->"<<d.front()<<endl;
    cout<<"Back->"<<d.back()<<endl;

    cout<<"First index element is->"<<d.at(1)<<endl;
    cout<<"Size->"<<d.size()<<endl;
    cout<<"Empty or not-->"<<d.empty()<<endl;
    cout<<"Before erase size-->"<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1 );
    cout<<"After erase size-->"<<d.size()<<endl;



}