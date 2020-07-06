//
// Created by zhulixi on 2020/5/11.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1,2,3,3,4,5,};
    cout<<accumulate(v.cbegin(),v.cend(),0)<<endl;
}