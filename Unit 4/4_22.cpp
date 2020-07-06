#include<bits/stdc++.h>
using namespace std;

int main()
{
	int grade;
	while(cin>>grade){
		string tmp;
		tmp = (grade>90) ? "high pass": (grade>75) ? "pass": (grade<60) ? "faul":"low pass";
		cout<<tmp<<endl;
	}
	return 0;
}