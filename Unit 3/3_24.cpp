#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v;
	int i;
	while(cin>>i) v.push_back(i);
	if(v.empty()){
		cout<<"no data"<<endl;
		return -1;
	}
	if(v.size()==1){
		cout<<v[0]<<endl;
		return 0;
	}
	for(auto it = v.begin();it!=v.end()-1;it++)
		cout<<(*it)+*(it+1)<<" ";
	cout<<endl;
	for(auto it1 = v.begin(),it2=v.end()-1;it1<=it2;it1++,it2--)
		cout<<(*it1)+(*it2)<<" ";
	cout<<endl;
	return 0;

}