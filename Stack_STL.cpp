#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
int main()

{
    stack<int> s ;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"Top element-->"<<s.top()<<endl;
    s.pop();
    cout<<"Top element-->"<<s.top()<<endl;
    cout<<"Empty or not(0-means false)(1-means true)-->"<<s.empty()<<endl;
    
    


}