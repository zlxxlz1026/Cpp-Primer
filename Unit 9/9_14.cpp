//
// Created by zhulixi on 2020/5/10.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<char *> l = {"an","haha"};
    vector<string> v;
    v.assign(l.cbegin(),l.cend());
    for(const auto& x:v){
        cout<<x<<endl;
    }
}