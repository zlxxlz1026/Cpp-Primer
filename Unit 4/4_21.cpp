#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v={0,1,2,3,4,5,6,7,8,9};
	for(auto &i:v){
		i = (i%2==0) ? i:i*2;
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}