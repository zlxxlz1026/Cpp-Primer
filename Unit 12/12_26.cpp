//
// Created by zhulixi on 2020/7/7.
//

#include<bits/stdc++.h>
using namespace std;
int n = 5;
int main()
{
    allocator<string> alloc;
    string *const p = alloc.allocate(n);
    string s;
    auto q = p;
    while(cin>>s&&q!=p+n){
        alloc.construct(q++,s);
    }
    while(q!=p){
        cout<<*--q<<" ";
        alloc.destroy(q);
    }
    alloc.deallocate(p,n);
}