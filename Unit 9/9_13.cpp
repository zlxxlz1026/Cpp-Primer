//
// Created by zhulixi on 2020/5/10.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l(5,4);
    vector<int> v{3,3,3,3,3};
    vector<double>v1(l.begin(),l.end());
    for(const auto& x:v1){
        cout<<x<<endl;
    }
    v.insert(v.cbegin(),5);
    vector<double>v2(v.begin(),v.end());
    for(const auto& x:v2){
        cout<<x<<endl;
    }
}