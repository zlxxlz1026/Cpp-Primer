//
// Created by zhulixi on 2020/5/11.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream is("../");
    if(!is){
        cout<<"not find this file"<<endl;
        return -1;
    }
    string longest_word;
    for(string word;ifs>>word;){
        if(word.find_first_not_of("aceimnorsuvwxz")==string::npos&&word.size()>longest_word.size())
            longest_word = word;

    }
    cout<<longest_word<<endl;
}