#include<iostream>
using namespace std;

class shape//abstract class
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
	virtual void calculateArea()=0;//Pure virtual function
	virtual void calculatePeri()=0;//Pure virtual function
	virtual void AcceptData()=0;//Pure virtual function
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
	void AcceptData()
	{
		cout<<"enter leng,breadth";
		cin>>leng>>breadth;
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
	void AcceptData()
	{
		cout<<"enter redius";
		cin>>redius;
	}
};

int main()
{
//	Rect r1;
//	r1.calculateArea();
//	r1.calculatePeri();
//	r1.PrintData();

	//shape *ptr=new shape(); //error shape class is Abstract so can not create object

	shape *ptr=NULL;
	int ch;
	do
	{
		cout<<"Enter 1:rect  2:circle"<<endl;
		cin>>ch;
		switch (ch) {
			case 1://rect
				ptr=new Rect();
				break;
			case 2://circle
				ptr=new Circle();
				break;
		}
		if(ptr!=NULL)
		{
			ptr->AcceptData();
			ptr->calculateArea();
			ptr->calculatePeri();
			ptr->PrintData();
		}
		cout<<"\n Enter 1:continue 0:exit";
		cin>>ch;
	}while(ch!=0);












//	ptr=new Rect();
//	ptr->AcceptData();
//	ptr->calculateArea();
//	ptr->calculatePeri();
//	ptr->PrintData();
//
//
//	ptr=new Circle();
//	ptr->calculateArea();
//	ptr->calculatePeri();
//	ptr->PrintData();
	return 0;
}



