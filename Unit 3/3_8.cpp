#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s("hello world");
	decltype(s.size()) i=0;
	while(i<s.size()){
		s[i] = 'X';
		i++;
	}
	cout<<s<<endl;
}