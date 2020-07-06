#include<iostream>
#include<string>
using namespace std;
/*
int main()
{
	string word;
	while(getline(cin,word)){
		if(!word.empty())
			cout<<word<<endl;
		else
			cout<<"empty string"<<endl;
	}
	return 0;
}
*/
int main()
{
	string word;
	while(cin>>word){
		cout<<word<<endl;
	}
	return 0;
}