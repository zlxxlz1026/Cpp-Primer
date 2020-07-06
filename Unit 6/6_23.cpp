#include<bits/stdc++.h>
using namespace std;
/*
void print(int *const pi)
{
	if (pi)
		cout << *pi << endl;
}

void print(const char* p)
{
	if (p)
		while (*p)
			cout << *p++ << " ";
	cout << endl;
}

void print(const int*begin, const int*end)
{
	while (begin != end)
		cout << *begin++ << " ";
	cout << endl;
}

void print(const int* ia, size_t size)
{
	for (auto i = 0; i != size; i++)
	{
		cout << ia[i] << " ";
	}
	cout << endl;
}
*/
void print(const int (&arr)[2])//arr是含有2个整数的整型数组的引用
{
	for(auto i:arr)
		cout<<i<<" ";
	cout<<endl;
}

int main()
{
	int i=1,j[2]={0,1};
	char ch[] = "pezy";
	// print(ch);
	// print(&i);
	// print(begin(j),end(j));
	// print(j,end(j)-begin(j));
	print(static_cast<int(&)[2]>(j));
}