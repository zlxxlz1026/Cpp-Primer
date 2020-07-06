//
// Created by zhulixi on 2020/7/6.
//

#include "12_2.h"
using namespace std;

int main(){
    const StrBlob s2{"hello","world","hhh"};
    cout<<s2.front()<<" "<<s2.back()<<endl;
    StrBlob s1{"hello","world","zlx"};
    s1.back() = "xlz";
    cout<<s1.front()<<" "<<s1.back()<<endl;
}