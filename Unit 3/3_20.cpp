#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<int> v;
	int x;
	while(cin>>x) v.push_back(x);
	if(v.empty())
		return -1;
	if(v.size()==1)
		return v[0];
	for(decltype(v.size()) i=0;i<v.size()-1;i++)
		cout<<v[i]+v[i+1]<<" ";
	cout<<endl;
	decltype(v.size()) size = (v.size()%2==0) ? v.size()/2:(v.size()/2+1);
	for(decltype(v.size()) i=0;i<size;i++)
		cout<<v[i]+v[v.size()-i-1]<<" ";
	cout<<endl;
	return 0;
}