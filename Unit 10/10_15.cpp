//
// Created by zhulixi on 2020/5/12.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 2;
    auto f = [a](const int b){return a+b;};
    cout<<f(3)<<endl;
}