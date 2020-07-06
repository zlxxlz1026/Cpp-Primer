#include<iostream>
#include"Sales_item.h"
using namespace std;

int main(){
	Sales_item item1,item2;
	if(cin>>item1){
		int num = 1;
		while(cin>>item2){
			if(item1.isbn()==item2.isbn()){
				num++;
			}
			else{
				cout<<item1.isbn()<<" "<<num<<endl;
				item1 = item2;
				num=1;
			}
		}
		cout<<item1.isbn()<<" "<<num<<endl;
	}
	else{
		cout<<"not find data"<<endl;
		return -1;
	}
	return 0;
}