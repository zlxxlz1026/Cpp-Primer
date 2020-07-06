#ifndef _PERSON_H
#define _PERSON_H

#include<string>
#include<iostream>
using namespace std;
class Person;
istream &read(istream &,Person &);
class Person{
	friend istream &read(istream &,Person &);
	friend ostream &print(ostream &,const Person &);
private:
	string name;
	string address;
public:
	Person(istream &is) return {read(is,*this);}
	Person() = default;
	Person(const string name,const string add):name(name),address(add) {}
	const string& getName() const{
		return name;
	}
	const string& getAddress() const{
		return address;
	}
};

istream &read(istream &is,Person &p){
	is>>p.name>>p.address;
	return is;
}
ostream &print(ostream &os,const Person &p){
	os<<p.name<<" "<<p.address;
	return os;
}


#endif