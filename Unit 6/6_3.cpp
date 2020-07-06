#include<bits/stdc++.h>
using namespace std;
int fact(int val){
	int res=1;
	while(val>0){
		res *= val;
		val--;
	}
	return res;
}

int main()
{
	int x;
	cin>>x;
	cout<<fact(x)<<endl;
}