#include <iostream>
using namespace std;

int main()
{
	int n=22;
	int d=0;
	try
	{
		if(d==0)
		{
			throw "eeee";
		}
		int res=n/d;
		cout<<"res="<<res;
	}

	catch(int e)
	{
		cout<<"error divided by zero  int :(";
	}
	catch(char e)
	{
		cout<<"error divided by zero  char:(";
	}
	catch(...)
	{
		cout<<"error divided by zero catch(...)";
	}
	return 0;
}



