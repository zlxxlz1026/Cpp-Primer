//
// Created by zhulixi on 2020/5/9.
//
#include<bits/stdc++.h>
#include"Sales_data.h"
using namespace std;

int main()
{
    ifstream in("../1.txt");
    ofstream out("../out.txt",ofstream::app);
    Sales_data total;
    if(read(in,total)){
        Sales_data item;
        while(read(in,item)){
            if(total.isbn()==item.isbn()){
                total.combine(item);
            }
            else{
                print(out,total)<<endl;
                total = item;
            }
        }
        print(out,total)<<endl;
    }
    else{
        cout<<"No data"<<endl;
    }
}
