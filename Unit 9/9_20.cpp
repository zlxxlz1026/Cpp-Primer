//
// Created by zhulixi on 2020/5/10.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l={1,2,3,4,5,6,7};
    deque<int> d1,d2;
    for(auto x:l){
        ((x & 1) ? d2:d1).emplace_back(x);
    }
    for(auto i:d1)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:d2)
        cout<<i<<" ";
    cout<<endl;
}