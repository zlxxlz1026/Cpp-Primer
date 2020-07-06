//
// Created by zhulixi on 2020/5/12.
//

#include<bits/stdc++.h>
using namespace std;

bool cmp(const string& s1,const string& s2){
    return s1.size()<s2.size();
}

void elimDups(vector<string>& words){
    stable_sort(words.begin(),words.end(),cmp);
//    auto it = unique(words.begin(),words.end());
    for(const auto& i:words)
        cout<<i<<" ";
    cout<<endl;
//    words.erase(it,words.end());
//    for(const auto& i:words)
//        cout<<i<<" ";
//    cout<<endl;
}
int main()
{
    vector<string> words{"xxxx","xxxx","jjj","jjj","ooo"};
    elimDups(words);
}