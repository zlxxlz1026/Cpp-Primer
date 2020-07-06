#include<bits/stdc++.h>
using namespace std;

int count(){
	static int cnt=0;
	return cnt++;
}

int main()
{
	for(auto i=0;i<10;i++)
		cout<<count()<<endl;
	return 0;
}