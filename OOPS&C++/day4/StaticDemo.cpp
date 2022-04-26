
#include <iostream>
using namespace std;
class product
{
private:
	string name;
	static int price;

public:
	product(string name="")
	{
		this->name=name;
		//this->price=p;
	}
	static void setPrice(int p)
	{
		price=p;
	}
	void printData()
	{
		cout<<"\n product name="<<this->name<<" price="<<this->price;
	}
};
int product::price=49;

int main()
{
	product p1("box");
	p1.printData();
	product p2("penset");
	p2.printData();
	product::setPrice(65);
	product p3("photo");
	p3.printData();
	product p4("bag");
	p4.printData();

}



