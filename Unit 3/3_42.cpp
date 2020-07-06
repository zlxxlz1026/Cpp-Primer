#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v{0,1,2,3,4,5,6,7,8,9};
	const size_t x = 10;
	int a[x];
	for(int i=0;i<v.size();i++)
		a[i] = v[i];
	for(auto i:a)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}