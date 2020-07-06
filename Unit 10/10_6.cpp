//
// Created by zhulixi on 2020/5/12.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{0,1,2,3,4,5};
    fill_n(v.begin(),6,0);
    for(const auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}