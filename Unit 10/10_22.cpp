//
// Created by zhulixi on 2020/5/12.
//

#include<bits/stdc++.h>
using namespace std;

bool cmp(const string& s,size_t sz){
    return s.size()<=sz;
}

int main()
{
    std::size_t sz = 6;
    vector<string>v{"aaaaaaa","asdasdasd","ccc"};
    auto sum = count_if(v.cbegin(),v.cend(),bind(cmp,placeholders::_1,sz));
    cout<<sum<<endl;
}