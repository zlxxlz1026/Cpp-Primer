#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1;
	int cnt=1,m=1;
	if(cin>>s){
		string tmp;
		while(cin>>tmp){
			if(s==tmp){
				cnt++;
			}
			else{
				m = max(m,cnt);
				s1 = (m>cnt) ? s1:s;
				s = tmp;
				cnt=1;
			}
		}
	}
	cout<<s1<<"\t"<<m<<endl;
}