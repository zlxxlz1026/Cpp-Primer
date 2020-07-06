//
// Created by zhulixi on 2020/7/6.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unique_ptr<string> p1 (new string("pezy"));
    cout<<*p1<<endl;
    p1.reset(nullptr);
}