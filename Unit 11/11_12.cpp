//
// Created by zhulixi on 2020/5/13.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int x=1;
    vector<pair<string,int>> v;
    while(cin>>s>>x){
        v.emplace_back(make_pair(s,x));
//        v.push_back({s,x});
//        v.emplace_back(pair<string,int>(s,x));
    }
    for(const auto& i:v)
        cout<<i.first<<" "<<i.second<<endl;
}