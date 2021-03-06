//
// Created by zhulixi on 2020/7/6.
//

#ifndef UNIT_12_12_2_H
#define UNIT_12_12_2_H
#include<bits/stdc++.h>
using std::vector;
using std::string;
class StrBlob{
public:
    using size_type = vector<string>::size_type;
    StrBlob():data(std::make_shared<vector<string>>()){}
    StrBlob(std::initializer_list<string> il):data(std::make_shared<vector<string>>(il)){}
    size_type size() const{
        return data->size();
    }
    bool empty() const{
        return data->empty();
    }
    void push_back(const string& s){
        data->push_back(s);
    }
    void pop_back(){
        check(0,"pop_back on empty StrBlob");
        data->pop_back();
    }
    string& front(){
        check(0,"front on empty StrBlob");
        return data->front();
    }
    string& back(){
        check(0,"back on empty StrBlob");
        return data->back();
    }
    const string& front() const{
        check(0,"front on empty StrBlob");
        return data->front();
    }
    const string& back() const{
        check(0,"back on empty StrBlob");
        return data->back();
    }

private:
    void check(size_type i,const string& msg) const{
        if(i>=data->size()){
            throw std::out_of_range(msg);
        }
    }
private:
    std::shared_ptr<vector<string>>data;
};
#endif //UNIT_12_12_2_H
