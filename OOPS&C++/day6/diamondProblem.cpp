#include <iostream>
using namespace std;

class A
{
public:
	int a;
	A(int aa=1)
	{
		this->a=aa;
	}
	void printA()
	{
		cout<<"----class A::Print";
		cout<<"\nA::a="<<a;
	}
};
class B:virtual public A
{
public:
	int b;
		B(int bb=1,int aa=1)
		{
			this->a=aa;
			this->b=bb;
		}
		void printB()
		{
			cout<<"----class B::Print";
			cout<<"\nB::a="<<a<<"  B::b="<<b;
		}
};
class C: virtual public A
{
public:
	int c;
		C(int cc=1,int aa=1)
		{
			this->c=cc;
			this->a=aa
		}
		void printC()
		{
			cout<<"----class C::Print";
			cout<<"\nC::a="<<a<<"  C::c="<<c;
		}
};
class D:public B,C
{
public:
	int d;
		D(int dd=1,int aa=1,int bb=1,int cc=1):B(bb,aa),C(cc,aa)
		{
			d=dd;
		}
		void printD()
		{
			cout<<"----class D::Print";
			cout<<"\nD::d="<<d;
			this->printB();
			this->printC();
			this->printA(); //error
		}
};


int main()
{
	D d1;
	A a1;
	B b1;
	C c1;
	//d1.printD();
	cout<<" \n sizeof(a1)="<<sizeof(a1);
	cout<<" \n sizeof(b1)="<<sizeof(b1);
	cout<<" \n sizeof(c1)="<<sizeof(c1);
	cout<<" \n sizeof(d1)="<<sizeof(d1);
	return 0;
}



