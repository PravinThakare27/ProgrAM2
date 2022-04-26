#include<iostream>
using namespace std;

class shape
{
protected:
	double area;
	double peri;
public:
	shape()
	{
		cout<<"\ninside shape::shape()";
		this->area=0;
		this->peri=0;
	}
	void PrintData()
	{
		cout<<"\n area="<<area;
		cout<<"\n peri="<<peri;
	}
	virtual void calculateArea()
	{
		cout<<"\ninside shape::calculateArea()()";
	}
	virtual void calculatePeri()
	{
		cout<<"\ninside shape::calculatePeri()()";
	}
};

class Rect:public shape
{
	int leng,breadth;
public:
	Rect(int l=11,int b=12)
	{
		cout<<"\ninside Rect::Rect()";
		this->leng=l;
		this->breadth=b;
	}
	virtual void calculateArea()
	{
		this->area=this->leng*this->breadth;
	}
	virtual void calculatePeri()
	{
		this->peri=2*(this->leng+this->breadth);
	}
};
class Circle:public shape
{
	int redius;
public:
	Circle(int r=11)
	{
		cout<<"\ninside Circle::Circle()";
		this->redius=r;
	}
	void calculateArea()
	{
		this->area=3.14*this->redius*this->redius;
	}
	void calculatePeri()
	{
		this->peri=2*3.14*this->redius;
	}
};

int main()
{
//	Rect r1;
//	r1.calculateArea();
//	r1.calculatePeri();
//	r1.PrintData();


	shape *ptr;

	ptr=new Rect();
	ptr->calculateArea();
	ptr->calculatePeri();
	ptr->PrintData();

	ptr=new Circle();
	ptr->calculateArea();
	ptr->calculatePeri();
	ptr->PrintData();
	return 0;
}



