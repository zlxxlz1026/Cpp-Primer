#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if(!b)
		throw(runtime_error("no zero"));
	cout<<static_cast<double>(a)/b;
	return 0;
}