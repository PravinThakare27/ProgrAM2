#include <iostream>
using namespace std;
class person //base class
{
protected:
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
	virtual void accept()
	{
		cout<<"\nEnter Name";
		cin>>name;
		cout<<"\nenter adhar no";
		cin>>adhar;
	}
	virtual void print()
	{
		cout<<"\nName : "<<this->name;
		cout<<" adhar : "<<adhar;
	}
	void functionPerson()
	{
		cout<<"\n -----functionPerson() called------";
	}

};
//student is a derived from person
//derived:base
class student:public person /*derived class*/
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
		this->name="abc";
		cout<<"\n school name="<<schoolName;
		cout<<"\n roll num="<<this->rollNo;
		person::print();
		//this->timepass();
	}
	void accept()
	{
		person::accept();
		cout<<"\nEnter roll no";
		cin>>rollNo;
		cout<<"\n enter School name";
		cin >>schoolName;
	}
	void functionstudent()
		{
			cout<<"\n -----functionstudent() called------";
		}
};

int main()
{
//	person p1("xyz",1234);
//	p1.print();

//--------------------------------------------------
//	student s1("xyz",111111,"mmm",12);//stack based object
//	s1.print();
//
//	student *sptr=new student("raju",2345,"mille",44);//heap based object
//	sptr->print();
//--------------------------------------------------------
//	student s;
//	person p=s;
//	p.print();
//	--------------------------------------
//	student *sptr=new student();
	//sptr->print();

//	person *pptr=sptr;
//	pptr->print();
//-------------------------------------------------
	person *pptr=new student();
	pptr->accept();
	pptr->print();
	pptr->functionPerson();

	//pptr->functionstudent();error
	return 0;
}


