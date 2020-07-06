//
// Created by zhulixi on 2020/5/9.
//

#include<bits/stdc++.h>
using namespace std;

void readFile(const string& name,vector<string>& v){
    ifstream in(name);
    string buf;
    if(in){
        while(in>>buf){
            v.push_back(buf);
        }
    }
}

int main()
{
    vector<string>res;
    readFile("../1.txt",res);
    for(const auto& x:res)
        cout<<x<<endl;
}