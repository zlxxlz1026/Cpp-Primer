#include<bits/stdc++.h>
using namespace std;

string make_plural(size_t ctr,const string& word,const string& ending="s")
{
	return (ctr>1) ? word+ending:word;
}

int main()
{
	cout<<make_plural(2,"failure")<<endl;
}