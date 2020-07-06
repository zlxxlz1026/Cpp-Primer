#include<bits/stdc++.h>
using namespace std;

int main(){
	int x1,x2;
	cout<<"please input two numbers"<<endl;
	cin>>x1>>x2;
	if(x1>x2){
		int tmp=x1;
		x1=x2;
		x2=tmp;
	}
	while(x1<=x2){
		cout<<x1<<endl;
		x1++;
	}
	return 0;
}