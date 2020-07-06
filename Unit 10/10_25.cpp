//
// Created by zhulixi on 2020/5/12.
//

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

bool check_size(const string& s,size_t sz){
    return s.size()>sz;
}

void biggies(vector<string>& words,vector<string>::size_type sz){
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string& a,const string& b){return a.size()<b.size();});
//    auto it = partition(words.begin(),words.end(),[sz](const string& a){return a.size()>sz;});
    auto it  =partition(words.begin(),words.end(),bind(check_size,placeholders::_1,sz));
    for_each(words.begin(),it,[](const string& s){cout<<s<<" ";});
    cout<<endl;
}


int main()
{
    std::vector<std::string> v{"the",  "quick", "red",  "fox", "jumps",
                               "over", "the",   "slow", "red", "turtle"};
    biggies(v,4);
}