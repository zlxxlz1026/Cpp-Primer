//
// Created by zhulixi on 2020/5/12.
//

#include<bits/stdc++.h>
using namespace std;

bool check_size(const string& s,size_t sz){
    return s.size()<sz;
}

vector<int>::const_iterator find_xx(const vector<int>& v,const string& word){
    return find_if(v.cbegin(),v.cend(),bind(check_size,word,placeholders::_1));
}
vector<int>::const_iterator find_xxx(const vector<int>& v,const string& word){
    return find_if(v.cbegin(),v.cend(),[&word](std::size_t sz)->bool{return word.size()<sz;});
}

int main()
{
    vector<int> v{1,2,3,4};
    string s="123";
    cout<<*find_xxx(v,s)<<endl;
}