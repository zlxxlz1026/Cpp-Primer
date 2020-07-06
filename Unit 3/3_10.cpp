#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s("hello,world");
	string res;
	for(auto &c:s){
		if(!ispunct(c))
			res += c;
	}
	cout<<res<<endl;
	return 0;
}