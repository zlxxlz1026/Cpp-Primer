//
// Created by zhulixi on 2020/5/12.
//

#include<bits/stdc++.h>
using namespace std;

void elimDups(vector<string>& words){
    sort(words.begin(),words.end());
    auto it = unique(words.begin(),words.end());
    words.erase(it,words.end());
}

void biggies(vector<string>& words,vector<string>::size_type sz){
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string& a,const string& b){return a.size()<b.size();});
    auto it = find_if(words.begin(),words.end(),[sz](const string& a){return a.size()>sz;});
    for_each(it,words.end(),[](const string& s){cout<<s<<" ";});
    cout<<endl;
}

int main()
{
    std::vector<std::string> v{"1234", "1234", "1234", "hi~",
                               "alan", "alan", "cp"};
    biggies(v,3);
}