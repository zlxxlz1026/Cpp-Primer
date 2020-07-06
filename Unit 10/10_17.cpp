//
// Created by zhulixi on 2020/5/12.
//

#include "Sales_data.h"
#include<bits/stdc++.h>
using namespace std;

int main()
{
    Sales_data item1("hahha"),item2("jjjjj"),item3("aaaaa");
    vector<Sales_data> v{item1,item2,item3};
    sort(v.begin(),v.end(),[](const Sales_data& item1,const Sales_data& item2)
                                {return item1.isbn()<item2.isbn();});
    for(const auto& i:v)
        cout<<i.isbn()<<" ";
    cout<<endl;
    return 0;

}