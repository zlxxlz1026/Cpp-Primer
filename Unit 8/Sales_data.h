#ifndef _SALES_DATA
#define _SALES_DATA

#include<iostream>
#include<string>
using namespace std;


class Sales_data{
	friend istream &read(istream &,Sales_data &);
	friend ostream &print(ostream &,const Sales_data &);
	friend Sales_data add(const Sales_data &,const Sales_data &);
public:
	// Sales_data(): sold(0),revenue(0){}
	// Sales_data(const string &s):bookNo(s) {}
	Sales_data(const string &s,const unsigned n,const double price)
		:bookNo(s),sold(n),revenue(price*n) {}
	// Sales_data(istream &is){
		// read(is,*this);
	// }
	Sales_data():Sales_data("",0,0.0) {}
	Sales_data(const string &s):Sales_data(s,0,0.0) {}
	Sales_data(istream &is):Sales_data(){read(is,*this);}
	string isbn() const{
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);
private:
	double avg_price() const;
private:
	string bookNo;
	unsigned int sold = 0;
	double revenue = 0.0;
};

inline double Sales_data::avg_price() const{
	return sold ? revenue/sold : 0;
}

class Sales_data;
istream &read(istream &,Sales_data &);

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	sold += rhs.sold;
	revenue += rhs.revenue;
	return *this;
}
istream &read(istream &is,Sales_data &item){
	double price;
	is>>item.bookNo>>item.sold>>price;
	item.revenue = price*item.sold;
	return is;
}
ostream &print(ostream &os,const Sales_data &item){
	os<<item.isbn()<<" "<<item.sold<<" "<<item.revenue;
	return os;
}

Sales_data add(const Sales_data &l,const Sales_data &r){
	Sales_data sum = l;
	sum.combine(r);
	return sum;
}
#endif