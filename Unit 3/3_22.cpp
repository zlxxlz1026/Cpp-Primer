#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<string> v;
	for(string line;getline(cin,line);)
		v.push_back(line);
	for(auto it=v.begin();it!=v.end()&&!it->empty();it++)
	{
		for(auto &c:*it)
			c = toupper(c);
		cout<<(*it)<<endl;
	}
	return 0;
}