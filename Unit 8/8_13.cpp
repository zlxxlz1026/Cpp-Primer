//
// Created by zhulixi on 2020/5/9.
//

#include<bits/stdc++.h>
using namespace std;
struct PersonInfo{
    string name;
    vector<string>phones;
};

bool valid(const string& str){
    return isdigit(str[0]);
}

string format(const string& str){
    return str.substr(0,3)+"-"+str.substr(3,3)+str.substr(6);
}

int main()
{
    ifstream in("../1.txt");
    if(!in) cout<<"no find this file"<<endl;
    string line,word;
    vector<PersonInfo> people;
    istringstream iis;
    while(getline(in,line)){
        PersonInfo info;
        iis.clear();
        iis.str(line);
        iis>>info.name;
        while(iis>>word){
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    for(const auto& p:people){
        ostringstream formatted,badNums;
        for(const auto& num:p.phones){
            if(!valid(num)){
                badNums<<" "<<num;
            }
            else
                formatted<<" "<<format(num);
        }
        if(badNums.str().empty())
            cout<<p.name<<" "<<formatted.str()<<endl;
        else
            cerr<<"input error:"<<p.name<<"invalie number"<<badNums.str()<<endl;
    }
}