#include<bits/stdc++.h>
using namespace std;
size_t count(int n){
	static size_t cnt=0;
	cnt += n;
	return cnt;
}

int main()
{
	for(size_t i=0;i<10;i++){
		cout<<count(i)<<endl;
	}
	return 0;
}