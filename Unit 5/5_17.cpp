#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v1 = {0,1,2,3};
	vector<int>v2 = {0,1,2,3,4,5};
	size_t size = v1.size()<v2.size() ? v1.size():v2.size();
	for(size_t i=0;i<size;i++){
		if(v1[i]!=v2[i]){
			cout<<"not same"<<endl;
			return false;
		}
	}
	cout<<"same"<<endl;
	return 0;
}