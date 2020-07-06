#include<iostream>
#include<string>
#include"Sales_data.h"
using namespace std;

//读取一组销售记录，打印到命令行
/*
int main(){
	Sales_data it;
	double price=0.0;
	cin>>it.bookNo>>it.sold>>price;
	it.revenue = it.sold*price;
	cout<<it.bookNo<<"\t"<<it.sold<<"\t"<<it.revenue<<"\t"
		<<price<<endl;
	return 0;
}
*/
//读取两个ISBN相同的对象，输出它们的和
/*
int main(){
	Sales_data it1,it2;
	double price1=0.0,price2=0.0;
	cin>>it1.bookNo>>it1.sold>>price1;
	cin>>it2.bookNo>>it2.sold>>price2;
	it1.revenue = it1.sold*price1;
	it2.revenue = it2.sold*price2;
	if(it1.bookNo==it2.bookNo){
		unsigned int totalCnt = it1.sold+it2.sold;
		double totalSum = it1.revenue+it2.revenue;
		cout<<it1.bookNo<<" "<<totalCnt<<" "<<totalSum<<" ";
		if(totalCnt==0)
			cout<<"no data here"<<endl;
		else
			cout<<totalSum/totalCnt<<endl;
	}
	else{
		cout<<"Data must have same ISBN"<<endl;
		return -1;
	}
	return 0;
}
*/

//读取多条销售记录
int main()
{
	Sales_data it1;
	double price1 = 0.0;
	if(cin>>it1.bookNo>>it1.sold>>price1){
		it1.revenue = price1*it1.sold;
		Sales_data it2;
		double price2;
		while(cin>>it2.bookNo>>it2.sold>>price2){
			it2.revenue = it2.sold*price2;
			if(it1.bookNo==it2.bookNo){
				it1.sold += it2.sold;
				it1.revenue += it2.revenue;
			}
			else{
				cout<<it1.bookNo<<" "<<it1.sold<<" "<<it1.revenue<<" ";
				if(it1.sold==0) cout<<"no book sold"<<endl;
				else cout<<it1.revenue/it1.sold<<endl;
				it1 = it2;
			}
		}
		cout<<it1.bookNo<<" "<<it1.sold<<" "<<it1.revenue<<" ";
		if(it1.sold==0) cout<<"no book sold"<<endl;
		else cout<<it1.revenue/it1.sold<<endl;
	}
	else
		cout<<"Data must have same ISBN"<<endl;
	return 0;
}