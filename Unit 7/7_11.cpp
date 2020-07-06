#include "Sales_data.h"
using namespace std;

int main()
{
	Sales_data item1("xxxx");
	print(cout,item1)<<endl;
	Sales_data item2("cccc",10,20);
	print(cout,item2)<<endl;
	Sales_data item3;
	print(cout,item3)<<endl;
	Sales_data item4(cin);
	print(cout,item4)<<endl;
}