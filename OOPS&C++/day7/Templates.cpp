#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	Complex(int r=1,int i=2)
	{
		this->real=r;
		this->imag=i;
	}
	void PrintComplex()
	{
		cout<<"\ncomplex="<<this->real<<"+j"<<this->imag;
	}
};
//call by refrance   main()--->mySwap(a,b);
template<class T>
void mySwap(T &refa,T &refb)
{
	T t=refa;
	refa=refb;
	refb=t;
}
int main()
{
	Complex c1(1,1);
	Complex c2(22,22);
	cout<<"\n before";
	c1.PrintComplex();
	c2.PrintComplex();
	mySwap(c1,c2);
	cout<<"\n after";
	c1.PrintComplex();
	c2.PrintComplex();

//	char a='A';
//	char b='B';
//	cout<<"\n before a="<<a<<"  b="<<b;
//	mySwap(a,b);
//	cout<<"\n after a="<<a<<"  b="<<b;
//	int a=22;
//	int b=55;
//	cout<<"\n before a="<<a<<"  b="<<b;
//	mySwap(a,b);
//	cout<<"\n after a="<<a<<"  b="<<b;
}


