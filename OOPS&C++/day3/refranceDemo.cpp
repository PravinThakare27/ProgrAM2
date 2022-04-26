#include <iostream>
using namespace std;


//call by value   main()--->mySwap(a,b);
//void mySwap(int a,int b)
//{
//	int t=a;
//	a=b;
//	b=t;
//}
//call by address   main()--->mySwap(&a,&b);
void mySwap(int *pa,int *pb)
{
	int t=*pa;
	*pa=*pb;
	*pb=t;
}
//call by refrance   main()--->mySwap(a,b);
void mySwap(int &refa,int &refb)
{
	int t=refa;
	refa=refb;
	refb=t;
}

int main()
{
	int a=22;
	int b=55;
//	cout<<"\n before a="<<a<<"  b="<<b;
//	mySwap(a,b);
//	cout<<"\n after a="<<a<<"  b="<<b;

//	cout<<"\n before a="<<a<<"  b="<<b;
//	mySwap(&a,&b);
//	cout<<"\n after a="<<a<<"  b="<<b;


	cout<<"\n before a="<<a<<"  b="<<b;
	mySwap(a,b);
	cout<<"\n after a="<<a<<"  b="<<b;

//	int num=5;
//	int &ref=num;
//
//	cout<<"\nnum="<<num<<"   address of num="<<&num;
//	cout<<"\n ref="<<ref<<"    address of ref"<<&ref;
}


