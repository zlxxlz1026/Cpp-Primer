#include<bits/stdc++.h>
using namespace std;

inline bool isShorter(const string& s1,const string& s2)
{
	return s1.size()<s2.size();
}

int main()
{
	cout<<isShorter("pzzz","pppp")<<endl;
}