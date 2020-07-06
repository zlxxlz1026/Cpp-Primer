//
// Created by zhulixi on 2020/5/13.
//

#include<bits/stdc++.h>
using namespace std;

void count_word(){
    map<string,int> mymap;
    string word;
    while(cin>>word){
        mymap[word]++;
    }
    for(const auto& i:mymap)
        cout<<i.first<<" "<<i.second<<endl;
}

int main()
{
    count_word();
}