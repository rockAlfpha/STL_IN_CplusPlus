#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int> max;

    priority_queue<int, vector<int> , greater<int>> min;


    max.push(1);
    max.push(23);
    max.push(4);
    max.push(88);
    cout<<"Size---->"<<max.size()<<endl;
    
    int size = max.size();
    for(int i=0; i<size; i++){
        cout<<max.top()<<" ";
        max.pop();

    }cout<<endl;

    min.push(1);
    min.push(23);
    min.push(98);
    min.push(1);
    min.push(90000);
    min.push(67);


    cout<<"Size of mini---->"<<min.size()<<endl;

    int minSize = min.size();
    for(int i=0; i<minSize; i++){
        cout<<min.top
        ()<<" ";
        min.pop();
    }cout<<endl;


    cout<<"Empty or not---->"<<min.empty()<<endl; 
 
}