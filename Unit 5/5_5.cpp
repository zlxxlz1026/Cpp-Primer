#include<bits/stdc++.h>
using namespace std;

int main()
{
	const vector<string> v={"F","D","C","B","A","A++"};
	int grade;
	while(cin>>grade){
		string res="";
		if(grade<60)
			res=v[0];
		else{
			res = v[(grade-50)/10];
			if(grade!=100){
				if(grade%10>5)
					res += '+';
				else
					res += '-';
			}
		}
		cout<<res<<endl;
	}
	return 0;
}