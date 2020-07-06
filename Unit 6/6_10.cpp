#include<bits/stdc++.h>
using namespace std;

void change(int *p,int*q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

int main()
{
	int i,j;
	cin>>i>>j;
	change(&i,&j);
	cout<<i<<" "<<j<<endl;
	return 0;
}