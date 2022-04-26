#include <iostream>
using namespace std;
#include <stdlib.h>
class Complex
{
private:
	int real;
	int imag;
public:
	Complex()
	{
		cout<<"\n------Complex()------";
		this->real=0;
		this->imag=0;
	}
	Complex(int r,int i)
	{
		cout<<"\n------Complex(int r,int i)------";
		this->real=r;
		this->imag=i;
	}
	Complex (const Complex &c3)
	{
		cout<<"\n------Complex (Complex c3)------";
		this->real=c3.real;
		this->imag=c3.imag;
	}
	void setReal(int r)
	{
		this->real=r;
	}
	void setImag(int i)
	{
		this->imag=i;
	}
	int getReal()
	{
		return this->real;
	}
	int getImag()
	{
		return this->imag;
	}
	Complex sum(const Complex &c2)
	{
		Complex c3;
		c3.real=this->real+c2.real;
		c3.imag=this->imag+c2.imag;
		return c3;
	}

	void PrintComplex()
	{
		cout<<"\ncomplex="<<this->real<<"+j"<<this->imag;
	}
	void AcceptComplex()
	{
		cout<<"\nEnter complex number";
		cin>>this->real>>this->imag;
	}
	~Complex()
	{
		cout<<"\n------ ~Complex()------";
	}
};
int main()
{
	Complex c1(3,4);
	Complex c2(22,33);
	Complex c3;
	c3=c1.sum(c2);
	c3.PrintComplex();


	Complex cc(c3);
	cc.PrintComplex();





//	Complex c1;
//	c1.AcceptComplex();
//	c1.PrintComplex();//cptr->AcceptComplex();
	//cptr->PrintComplex();


	//Complex *cptr=(Complex*)malloc(sizeof(Complex));
	//cptr->AcceptComplex();
	//cptr->PrintComplex();

//	Complex *cptr=new Complex();
//	cptr->AcceptComplex();
//	cptr->PrintComplex();
//	delete cptr;










}




