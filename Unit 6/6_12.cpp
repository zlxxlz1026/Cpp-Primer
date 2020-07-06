#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int i = 1,j = 2;
	swap(i,j);
	cout<<i<<'\t'<<j<<endl;
	return 0;
}