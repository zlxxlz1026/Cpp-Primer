//
// Created by zhulixi on 2020/5/13.
//

#include<bits/stdc++.h>
using namespace std;

class Families{
public:
    using Child = pair<string,string>;
    using Chileren = vector<Child>;
    using Data = map<string,Chileren>;
    void add(const string& last_name,const string& first_name,string birthday){
        _data[last_name].push_back(make_pair(first_name,birthday));
    }
    ostream& print(ostream& os) const{
        if(_data.empty())
            return os<<"No data right now"<<endl;
        for(const auto& p:_data){
            os<<p.first<<endl;
            for(const auto&p2:p.second)
                os<<p2.first<<" "<<p2.second<<endl;
            os<<endl;
        }
        return os;
    }
private:
    Data _data;
};

int main()
{
    Families families;
    string message = "please enter last name,first name and birthday";
    cout<<message<<endl;
    string l,f,b;
    while(cin>>l>>f>>b){
        families.add(l,f,b);
    }
    families.print(cout<<"Current data:"<<endl);
    return 0;
}