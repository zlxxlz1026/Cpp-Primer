#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<unsigned> scores(11,0);
	unsigned grade;
	auto it = scores.begin();
	while(cin>>grade){
		(*(it+grade/10))++;//必须要加圆括号
	}
	for(auto score:scores)
		cout<<score<<" ";
	cout<<endl;
	return 0;
}