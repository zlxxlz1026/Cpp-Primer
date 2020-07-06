//
// Created by zhulixi on 2020/5/12.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    std::size_t sz = 6;
    vector<string> v{"aaaaaaa","bbbbbbbbb","ccc"};
    auto sum = count_if(v.begin(),v.end(),[sz](const string& s){return s.size()>sz;});
    cout<<sum<<endl;
}