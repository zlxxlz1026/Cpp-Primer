#include<bits/stdc++.h>
using namespace std;

void swap(const int*&a,const int*&b)
{
	auto tmp = a;
	a = b;
	b = a;
}

int main()
{
	int a=4,b=5;
	int *p = &a,*q=&b;
	swap(p,q);//不能直接写&a,&b;
	cout<<*p<<"\t"<<*q<<endl;
	return 0;
}