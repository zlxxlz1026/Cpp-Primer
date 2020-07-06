#include<bits/stdc++.h>
using namespace std;

int compare(int i,const int* const j)
{
	return i<*j ? *j:i;
}

int main()
{
	int x = 6;
	cout<<compare(10,&x)<<endl;
}