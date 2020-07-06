#include<iostream>
#include<string>
using namespace std;

int main()
{
	string sum;
	string res;
	while(cin>>res){
		sum += res;
		sum += " ";
	}
	cout<<sum<<endl;
	return 0;
}