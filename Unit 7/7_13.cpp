#include "Sales_data.h"
using namespace std;

int main()
{
	Sales_data total(cin);
	if(!total.isbn().empty()){
		istream &is = cin;
		while(is){
			Sales_data trans(is);
			if(total.isbn()==trans.isbn())
				total.combine(trans);
			else{
				print(cout,total)<<endl;
				total = trans;
			}
		}
		print(cout,total);
	}
	else{
		cout<<"no data"<<endl;
		return -1;
	}
}