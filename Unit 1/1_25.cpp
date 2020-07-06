#include<iostream>
#include"Sales_item.h"
using namespace std;

int main(){
	Sales_item item1,item2;
	if(cin>>item1){
		Sales_item num = item1;
		while(cin>>item2){
			if(item1.isbn()==item2.isbn()){
				num += item2;
			}
			else{
				cout<<num<<endl;
				item1 = item2;
				num=item1;
			}
		}
		cout<<num<<endl;
	}
	else{
		cout<<"not find data"<<endl;
		return -1;
	}
	return 0;
}