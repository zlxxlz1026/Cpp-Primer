//
// Created by zhulixi on 2020/5/11.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string numbers{"0123456789"};
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string str{"ab2c3d7R4E6"};
    for(auto pos=0;(pos = str.find_first_not_of(alphabet,pos))!=string::npos;++pos)
        cout<<str[pos]<<" ";
    cout<<endl;
    for(auto pos=0;(pos = str.find_first_of(alphabet,pos))!=string::npos;++pos)
        cout<<str[pos]<<" ";
    cout<<endl;
}