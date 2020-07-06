#include<bits/stdc++.h>
using namespace std;

int sum(initializer_list<int>& l)
{
	int res=0;
	for(auto i:l)
		res += i;
	return res;
}

int main()
{
	initializer_list<int> l={1,2,3,4,5};
	cout<<sum(l)<<endl;
	return 0;
}