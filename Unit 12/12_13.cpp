//
// Created by zhulixi on 2020/7/6.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //重复释放
    shared_ptr<int> sp= make_shared<int>();
    int *p = sp.get();
    delete p;
}