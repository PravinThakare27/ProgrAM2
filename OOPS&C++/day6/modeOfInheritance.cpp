#include<iostream>
using namespace std;
class BASE
{
	private:
		int PrivateData;
	protected:
		int ProtectedData;
	public:
		int PublicData;
};
class Derived:protected BASE
{
	void printData()
	{
		this->PrivateData=1;
		this->ProtectedData=1;
		this->PublicData=1;
	}
};
class other
{
	void OtherPrint()
	{
		Derived d;
		d.PrivateData=1;
		d.ProtectedData=1;
		d.PublicData=1;
	}
}
int main()
{
}





