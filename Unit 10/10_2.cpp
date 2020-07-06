//
// Created by zhulixi on 2020/5/11.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l{"aaa","aa","aa"};
    cout<<count(l.cbegin(),l.cend(),"aa")<<endl;
    return 0;
}