#include<bits/stdc++.h>
using namespace std;
void check(vector<int>& v){
	if(v.empty())
		cout<<"no data"<<endl;
	else{
		for(auto it = v.begin();it!=v.end();it++)
			cout<<*it<<endl;
	}
	return;
}

void check(vector<string>& v){
	if(v.empty())
		cout<<"no data"<<endl;
	else{
		for(auto it = v.begin();it!=v.end();it++){
			if(it->empty())
				cout<<"null string"<<endl;
			else
				cout<<*it<<endl;
		}
	}
	return;
}

int main()
{
	vector<int> v{1,2,3,4,5,6,7};
	check(v);
	vector<string> v1{10,"hi"};
	check(v1);
}