#include "maths.h"

#include <iostream>
using namespace std;

void complex::print()
{
	cout<<"\n complex num="<<this->real<<"+j"<<this->imag;
}
complex::complex(int r,int i)
{
	this->imag=i;
	this->real=r;
}
void point::print()
{
	cout<<"\n point=("<<x<<","<<y<<")";
}
point::point(int x,int y)
{
	this->x=x;
	this->y=y;
}

