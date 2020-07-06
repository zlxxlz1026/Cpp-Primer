//
// Created by zhulixi on 2020/7/6.
//

#include<bits/stdc++.h>
using namespace std;

void process(shared_ptr<int> ptr){
    cout<<ptr.use_count()<<endl;
}

int main(){
    shared_ptr<int> p(new int(42));
    process(p);
    cout<<p.use_count()<<endl;
    auto q = p;
    cout<<p.use_count()<<endl;
    cout<<"the int p now point to is "<<*p<<endl;
    return 0;
}