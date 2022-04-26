#include <iostream>
using namespace std;
class person //base class
{
	string name;
	int adhar;
public:
	person()
	{
		cout<<"\nparameter less constr::person-----";
		name="xxx";
		adhar=0;
	}
	person(string name,int adhar)
	{
		cout<<"\nparameterized  constr::person(string,int)-----";
		this->name=name;
		this->adhar=adhar;
	}
	void accept()
	{
		cout<<"\nEnter Name";
		cin>>name;
		cout<<"\nenter adhar no";
		cin>>adhar;
	}
	void print()
	{
		cout<<"\nName : "<<this->name;
		cout<<" adhar : "<<adhar;
	}
	void timepass()
	{
		cout<<"\n -----TimePass() called------";
	}
};
//student is a derived from person
//derived:base
class student/*derived class*/:public person
{
	string schoolName;
	int rollNo;
public:
	student()
	{
		cout<<"\n------student()-------------";
		this->schoolName="mmm";
		this->rollNo=1;
	}
	student(string name,int a,string scl,int roll):person(name,a)
	{
		cout<<"\n------student(string,int,string,int)-------------";
		schoolName=scl;
		rollNo=roll;
	}
	void print()
	{
		cout<<"\n school name="<<schoolName;
		cout<<"\n roll num="<<this->rollNo;
		person::print();
		this->timepass();
	}
	void accept()
	{
		person::accept();
		cout<<"\nEnter roll no";
		cin>>rollNo;
		cout<<"\n enter School name";
		cin >>schoolName;
	}
};

int main()
{
//	person p1("xyz",1234);
//	p1.print();
	student s1("xyz",111111,"mmm",12);//stack based object
	s1.print();

	student *sptr=new student("raju",2345,"mille",44);//heap based object
	sptr->print();
	return 0;
}


