//
// Created by zhulixi on 2020/5/9.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in("../1.txt");
    if(!in) {
        cout << "no file" << endl;
        return -1;
    }
    vector<string> v;
    string buf;
    while(getline(in,buf)){
//        cout<<buf<<endl;
        v.push_back(buf);
    }
    istringstream is;
    for(auto& x:v){
        is.clear();
        is.str(x);
        string word;
        while(is>>word){
            cout<<word<<endl;
        }
    }
}