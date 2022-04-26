#include <iostream>
using namespace std;

class demo
{
	int num;
	const int c;
	mutable int m;
public:
	demo():c(0)//members initializer List
	{
		this->num=11;
		this->m=9;
	}
	demo(int n1,int c1,int m1):num(n1),c(c1),m(m1)//members initializer List
	{

	}
	int print()const
	{
		cout<<"\n num="<<num;
		//this->num=99;//error
		cout<<"\n const c="<<c;
		this->m=88;//working
		cout<<"\n m="<<m;

	}
};
int main()
{
	demo d1(11,22,33);
	d1.print();

	//const int c=6;
	//c=c+20;//error
	return 0;
}















