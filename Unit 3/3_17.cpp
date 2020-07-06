#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<string> v;
	string word;
	while(cin>>word) v.push_back(word);
	for(auto &str:v)
		for(auto &c:str)
			c = toupper(c);
	for(decltype(v.size()) i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	return 0;
}