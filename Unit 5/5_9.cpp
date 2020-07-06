#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c;
	int cnt=0;
	while(cin>>c){
		switch(c){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cnt++;
				break;
		}
	}
	cout<<cnt<<endl;
	return 0;
}