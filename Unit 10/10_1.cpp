//
// Created by zhulixi on 2020/5/11.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1,1,2,3,4,1,1};
    cout<<count(v.cbegin(),v.cend(),1);
}