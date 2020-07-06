//
// Created by zhulixi on 2020/5/13.
//

#include<bits/stdc++.h>
using namespace std;

void count_word_pro(){
    map<string,int> mymap;
    string word;
    while(cin>>word){
        for(auto &i:word)
            i = tolower(i);
        word.erase(remove_if(word.begin(),word.end(),[](const char& c){return ispunct(c);}),word.end());
        mymap[word]++;
    }
    for(const auto& i:mymap)
        cout<<i.first<<" "<<i.second<<endl;
}

int main()
{
    count_word_pro();
}