//
// Created by zhulixi on 2020/5/13.
//
#include "Sales_data.h"
#include<bits/stdc++.h>
using namespace std;

bool cmp(const Sales_data& item1,const Sales_data& item2){
    return item1.isbn()<item2.isbn();
}

int main()
{
    using cmpType = bool(*)(const Sales_data& item1,const Sales_data& item2);
    multiset<Sales_data,cmpType> myset(cmp);
}