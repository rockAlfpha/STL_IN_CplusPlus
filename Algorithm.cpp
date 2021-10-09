#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(89);
    v.push_back(9);

    cout<<"Finding 3-->"<<binary_search(v.begin(), v.end(), 3)<<endl;

    cout<<"Lower Bound-->"<<lower_bound(v.begin(), v.end(),9)-v.begin()<<endl;

    cout<<"Upper Bound-->"<<upper_bound(v.begin(), v.end(), 4)-v.begin()<<endl;


    int a=90, b=89;
    cout<<"Max-->"<<max(a,b)<<endl;
    cout<<"Min-->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"A-->"<<a<<endl;
    cout<<"B-->"<<b<<endl;
    
    string abcd = "ABCD";
    reverse(abcd.begin(), abcd.end());
    cout<<"String-->"<<abcd<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;



}