//
// Created by zhulixi on 2020/5/10.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    deque<string>d;
    while(cin>>word){
        d.emplace_back(word);
    }
    for(auto it = d.cbegin();it!=d.cend();++it){
        cout<<*it<<endl;
    }
    return 0;
}