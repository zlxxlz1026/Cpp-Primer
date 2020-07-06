#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[10];
	int *p1 = begin(a);
	int *p2 = end(a);
	while(p1!=p2){
		*p1 = 0;
		p1++;
	}
	for(auto i:a){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}