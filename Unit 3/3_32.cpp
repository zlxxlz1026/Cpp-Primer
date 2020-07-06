#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[10];
	for(int i=0;i<10;i++)
		a[i]=i;
	int b[10];
	for(int i=0;i<10;i++)
		b[i] = a[i];
	vector<int> v(10);
	for(auto it=v.begin();it!=v.end();it++)
		*it = it-v.begin();
	vector<int>v1(v);
	for(auto i:v)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}