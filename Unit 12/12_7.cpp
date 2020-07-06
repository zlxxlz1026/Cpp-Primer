//
// Created by zhulixi on 2020/7/6.
//

#include<bits/stdc++.h>
using namespace std;

shared_ptr<vector<int>> dynamic_vector_generator();
void dynamic_vector_processor(shared_ptr<vector<int>> v);
void dynamic_vector_printer(const shared_ptr<vector<int>> v);

int main(){
    shared_ptr<vector<int>> v = dynamic_vector_generator();
    dynamic_vector_processor(v);
    dynamic_vector_printer(v);
    return 0;
}

shared_ptr<vector<int>> dynamic_vector_generator(){
    return make_shared<vector<int>>();
}

void dynamic_vector_processor(shared_ptr<vector<int>> v){
    int x;
    cout<<"please enter:"<<endl;
    while(cin>>x){
        v->emplace_back(x);
    }
}

void dynamic_vector_printer(const shared_ptr<vector<int>> v){
    for(const int e: *v){
        cout<<e<<" ";
    }
    cout<<endl;
}