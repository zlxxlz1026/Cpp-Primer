#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b){
		try{
			if(b==0) throw(runtime_error("no zero"));
			cout<<static_cast<double>(a)/b<<endl;
		}catch(runtime_error err){
			cout<<err.what()<<endl;
			cout<<"try again?"<<endl;
			string s;
			cin>>s;
			if(s.empty()||s=="n")
				break;
		}
	}
	return 0;
}