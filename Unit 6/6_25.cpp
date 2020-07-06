#include<bits/stdc++.h>
using namespace std;

int main(int argc,char** argv)
{
	string res;
	for(size_t i=1;i<argc;i++)
		res += argv[i];
	cout<<res<<" "<<endl;
	return 0;
}