#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	if(cin>>s){
		string tmp;
		while(cin>>tmp){
			if(cin.eof()){
				cout<<"no"<<endl;
			}
			if(tmp==s){
				if(tmp[0]<'A'||tmp[0]>'Z')
					continue;
				cout<<tmp<<endl;
				break;
			}
			s = tmp;
		}
	}
	return 0;
}