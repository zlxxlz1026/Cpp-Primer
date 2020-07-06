//
// Created by zhulixi on 2020/7/6.
//

#include<bits/stdc++.h>
using namespace std;

vector<int>* dynamic_vector_generator();
void dynamic_vector_processor(vector<int>* v);
void dynamic_vector_printer(vector<int>* v);

int main(){
    vector<int>* v = dynamic_vector_generator();
    dynamic_vector_processor(v);
    dynamic_vector_printer(v);
    delete v;
    return 0;
}

vector<int>* dynamic_vector_generator(){
    vector<int> *v = new vector<int>();
    return v;
}

void dynamic_vector_processor(vector<int>* v){
    int x;
    cout<<"please enter:"<<endl;
    while(cin>>x){
        v->emplace_back(x);
    }
}

void dynamic_vector_printer(vector<int>* v){
    for(const int e: *v){
        cout<<e<<" ";
    }
    cout<<endl;
}