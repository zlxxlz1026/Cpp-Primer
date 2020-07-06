#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	while(cin>>s1>>s2){
		if(s1==s2)
			cout<<"equal"<<endl;
		else{
			cout<< ((s1.size()>s2.size()) ? s1:s2)<<endl;//<<优先级比?高
		}
	}
	return 0;
}