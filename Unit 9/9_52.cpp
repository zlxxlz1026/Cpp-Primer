//
// Created by zhulixi on 2020/5/11.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    const string& s = "This is (Mooophy(awesome)((((wooooooooo))))) and (ocxs) over";
    char repo = '#';
    int seen = 0;
    stack<char> mystack;
    for(auto i:s){
        mystack.push(i);
        if(i=='(') seen++;
        if(i==')'){
            if(seen==0){
                cout<<"括号不匹配"<<endl;
                return -1;
            }
            while(mystack.top()!='('){
                mystack.pop();
            }
            mystack.pop();
            seen--;
            mystack.push(repo);
        }
    }
    string output;
    for(;!mystack.empty();mystack.pop())
        output.insert(output.begin(),mystack.top());
    cout<<output<<endl;
    return 0;
}