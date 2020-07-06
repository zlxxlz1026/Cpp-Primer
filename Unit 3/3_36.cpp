#include<bits/stdc++.h>
using namespace std;

bool compare(int *const p1,int *const p2,int *const p3,int *const p4){
	if(p2-p1!=p4-p3)
		return false;
	for(int *i=p1,*j=p3;(i!=p2)&&(j!=p4);j++,i++)
		if((*i)!=(*j))
			return false;
	return true;
}

int main()
{
	int a[4] = {0,1,2,3};
	int b[] = {0,1,2};
	if(compare(begin(a),end(a),begin(b),end(b)))
		cout<<"same"<<endl;
	else
		cout<<"not same"<<endl;
	vector<int>v1{0,1,2};
	vector<int>v2 = {0,1,2};
	if(v1==v2)
		cout<<"same"<<endl;
	else
		cout<<"not same"<<endl;
	return 0;
}