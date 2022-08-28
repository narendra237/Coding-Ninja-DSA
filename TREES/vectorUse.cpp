#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Cap:"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Cap:"<<v.capacity()<<endl;
    v.push_back(20);
    cout<<"Cap:"<<v.capacity()<<endl;
    v.push_back(56);
    cout<<"Cap:"<<v.capacity()<<endl;
    v.push_back(78);
    cout<<"Cap:"<<v.capacity()<<endl;
    v.push_back(65);
    cout<<"Cap:"<<v.capacity()<<endl;
    cout<<"size"<<v.size()<<endl;

    v.pop_back();
    for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    cout<<v.at(2)<<endl;
    cout<<v.at(4)<<endl;

    return 0;
}