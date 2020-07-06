#include<bits/stdc++.h>
using namespace std;

int main()
{
	const vector<string> v = {"F", "D", "C", "B", "A", "A++"};
	int grade;
	while(cin>>grade){
		string res;
		res = (grade>=60) ? v[(grade-50)/10]:v[0];
		res += (grade<60||grade==100) ? "":grade%10>5 ? "+":"-";
		cout<<res<<endl;
	}
	return 0;
}