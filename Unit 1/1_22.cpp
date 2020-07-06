#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item item1;
	Sales_item sum;
	int x=1;
	while(cin>>item1){
		if(x=1)
			sum=item1;
		sum += item1;
		x++;
	}
	cout<<sum<<endl;
	return 0;
}