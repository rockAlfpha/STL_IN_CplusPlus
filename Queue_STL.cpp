#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue <int> t;
    t.push(1);
    t.push(2);
    t.push(3);
    t.push(4);

    cout<<"Front element is-->"<<t.front()<<endl;
    cout<<"Size-->"<<t.size()<<endl;

    t.pop();
    cout<<"Front element is-->"<<t.front()<<endl;
    cout<<"size-->"<<t.size()<<endl;

}