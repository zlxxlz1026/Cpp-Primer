//
// Created by zhulixi on 2020/5/11.
//

#include<bits/stdc++.h>
using namespace std;

class Date{
public:
    explicit Date(const string& str="");
    void Print();
private:
    unsigned day=1;
    unsigned month=1;
    unsigned year=1970;
    vector<string> month_name= {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                       "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    unsigned MonthFromName(const string& str){
        if(str.empty()) return 0;
        if(isdigit(str[0]))
            return stoi(str);
        for(size_t i=0;i<12;i++) {
            if (str.find(month_name[i]) != string::npos)
                return i + 1;
        }
        return 0;
    }
};
Date::Date(const string& str){
    if(str.empty()) return;
    string tmp=" ,/";
    auto month_pos = str.find_first_of(tmp);
    if(month_pos==string::npos)
        cout<<"This format is not supported now."<<endl;
    month = MonthFromName(str.substr(0,month_pos));\
    auto day_pos = str.find_first_of(tmp,month_pos+1);
    auto len = day_pos-month_pos-1;
    day = stoi(str.substr(month_pos+1,len));
    year = stoi(str.substr(day_pos+1));
}
void Date::Print() {
    cout<<this->year<<"-"<<month<<"-"<<day<<endl;
}

int main()
{
    {
        Date date = Date();
        date.Print();
    }
    {
        Date date = Date("January 1, 1900");
        date.Print();
    }
    {
        Date date = Date("1/1/1900");
        date.Print();
    }
    {
        auto date = Date("Jan 1, 1900");
        date.Print();
    }
}