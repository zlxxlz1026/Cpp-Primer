//
// Created by zhulixi on 2020/5/12.
//

#include<bits/stdc++.h>
using namespace std;

bool cmp(const string& s){
    return s.size()>=5;
}

int main()
{
    vector<string> v{"aaa","asjdkj","asjdkjasd"};
    auto it = partition(v.begin(),v.end(),cmp);
    for( auto i = v.cbegin();i!=it;++i)
        cout<<*i<<endl;
}