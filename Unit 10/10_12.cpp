//
// Created by zhulixi on 2020/5/12.
//

#include "Sales_data.h"
#include<bits/stdc++.h>
using namespace std;

bool compareIsbn(const Sales_data& it1,const Sales_data& it2){
    return it1.isbn()<it2.isbn();
}

int main()
{
    Sales_data item1("bbb"),item2("fff"),item3("aaa");
    vector<Sales_data> v{item1,item2,item3};
    sort(v.begin(),v.end(),compareIsbn);
    for(const auto& i:v){
        cout<<i.isbn()<<" ";
    }
    cout<<endl;
}