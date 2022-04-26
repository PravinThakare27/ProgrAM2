#include <iostream>
using namespace std;
class Date
{
	int day,month,year;
public:
	Date()
	{
		cout<<"\n------Date()------";
		day=1;
		year=1000;
		month=1;
	}
	Date(int dd,int mm,int yy)
	{
		cout<<"\n------Date(int ,int ,int)------";
		day=dd;
		year=yy;
		month=mm;
	}
	void printDate()
	{
		cout<<" "<<day<<"/"<<month<<"/"<<year;
	}
	void acceptDate()
	{
		cout<<"enter date";
		cin>>day>>month>>year;
	}
};

class person
{
	string name;
	int adhar;
	Date birthDate;
public:
	person()
	{
		cout<<"\n---------person()--------";
		this->name="aaa";
		this->adhar=0;
	}
	person(string name,int a,int d,int m,int y):birthDate(d,m,y)
	{
		cout<<"\n---------person(str,int-4)--------";
		this->name=name;
		this->adhar=a;
	}
	void print()
	{
		cout<<"\nname="<<this->name<<"  adhar="<<this->adhar;
		//cout<<birthDate.day;//error
		cout<<" birthDate=";
		this->birthDate.printDate();
	}
};


int main()
{
//	Date d1(11,2,2008);
//	d1.printDate();
//	Date d2;
//	d2.printDate();

	person p1("xyz",1234,1,2,2000);
	p1.print();
	return 0;
}



