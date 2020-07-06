#include<bits/stdc++.h>
using namespace std;

istream& func(istream& is){
	string buf;
	while(cin>>buf){
		cout<<buf<<endl;
	}
	is.clear();
	return is;
}

int main()
{
	istream& is = func(cin);
	cout<<is.rdstate()<<endl;
}