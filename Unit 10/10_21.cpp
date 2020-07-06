//
// Created by zhulixi on 2020/5/12.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 7;
    auto f = [&x]()->bool{
        if(x==0)
            return true;
        else{
            --x;
            return false;
        }
    };
    while(!f()){
        cout<<x<<endl;
    }
}