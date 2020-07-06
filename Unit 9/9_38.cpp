//
// Created by zhulixi on 2020/5/10.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int x;
    while(cin>>x){
        v.emplace_back(x);
        cout<<v.capacity()<<endl;
    }
}
