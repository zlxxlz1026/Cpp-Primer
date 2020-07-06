//
// Created by zhulixi on 2020/5/11.
//

#include<bits/stdc++.h>
using namespace std;

int sum_for_int(const vector<string>& v){
    int sum = 0;
    for(auto i:v)
        sum += stoi(i);
    return sum;
}

float sum_for_float(const vector<string>& v){
    float sum = 0.0;
    for(auto i:v)
        sum += stof(i);
    return sum;
}

int main()
{
    vector<string> v ={"1","2","3","4.5"};
    cout<<sum_for_float(v)<<endl;
    cout<<sum_for_int(v)<<endl;
}