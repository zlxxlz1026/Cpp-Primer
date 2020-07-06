#include<iostream>
using namespace std;

int main(){
	int currVal = 0,val=0;
	if(cin>>currVal){
		int cnt=1;
		while(cin>>val){
			if(currVal==val)
				cnt++;
			else{
				cout<<currVal<<" "<<cnt<<endl;
				cnt=1;
				currVal = val;
			}
		}
		cout<<currVal<<" "<<cnt<<endl;
	}
	return 0;
}