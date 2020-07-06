#include "Sales_data.h"
#include<iostream>
using namespace std;

int main()
{
	Sales_data total;
	if(cin>>total.bookNo>>total.sold>>total.revenue){
		Sales_data trans;
		while(cin>>trans.bookNo>>trans.sold>>trans.revenue){
			if(total.isbn()==trans.isbn())
				total.combine(trans);
			else{
				cout<<total.bookNo<<" "<<total.sold<<" "
				<<total.revenue<<endl;
				total=trans;
			}
		}
		cout<<total.bookNo<<" "<<total.sold<<" "<<total.revenue<<endl;
	}
	else{
		cout<<"no data"<<endl;
	}
}