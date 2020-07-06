//
// Created by zhulixi on 2020/5/10.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> v(begin(ia),end(ia));
    list<int> l(begin(ia),end(ia));
    auto it = v.begin();
    while(it!=v.end()){
        if(*it%2==0)
            it = v.erase(it);
        else
            ++it;
    }
    for(const auto& i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    auto it1 = l.begin();
    while(it1!=l.end()){
        if(*it1%2==1)
            it1 = l.erase(it1);
        else
            ++it1;
    }
    for(const auto& i:l){
        cout<<i<<" ";
    }
    cout<<endl;

}
