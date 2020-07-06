//
// Created by zhulixi on 2020/5/12.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    list<int> lst;
    int i;
    while(cin>>i){
        lst.push_back(i);
    }
    vec.resize(lst.size());
    copy(lst.cbegin(),lst.cend(),vec.begin());
    for(const auto i:vec)
        cout<<i<<" ";
    cout<<endl;
}