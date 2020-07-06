//
// Created by zhulixi on 2020/5/13.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string lastname,chilename;
    map<string,vector<string>> mymap;
    while([&]()->bool {cout<<"please input:"<<endl;
                        return cin>>lastname && lastname !="@q";}()){
        while(cin>>chilename)
            mymap[lastname].push_back(chilename);
    }
    for(const auto& i:mymap) {
        cout << i.first<<" ";
        for(const auto& c:i.second)
            cout<<c<<" ";
        cout<<endl;
    }
}