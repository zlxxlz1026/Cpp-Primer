//
// Created by zhulixi on 2020/5/9.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    while(getline(cin,line)){
        istringstream is(line);
        string word;
        while(is>>word){
            cout<<word<<endl;
        }
    }
}