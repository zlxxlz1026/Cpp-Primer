#include<bits/stdc++.h>
using namespace std;

bool hasUppercase(const string &s){
	for(auto c:s)
		if(isupper(c))
			return true;
	return false;
}

void makeLowercase(string &s){
	for(auto &c:s)
		c = tolower(c);
}

int main()
{
	string s = "Hello";
	if(hasUppercase(s))
		makeLowercase(s);
	cout<<s<<endl;
	return 0;
}