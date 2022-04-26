#include<iostream>
using namespace std;
class MyData
{
	int pin;
	int pass;

public:
	MyData(int pin=1234,int pass=1111)
	{
		this->pin=pin;
		this->pass=pass;
	}
	void PrintMyAccDetails()
	{
		cout<<"\nPIN :"<<this->pin<<endl;
		cout<<"Password : "<<this->pass;
	}
	friend void function_friend();
};

void function_friend()
{
	MyData data;
	data.pass=88898;
	data.PrintMyAccDetails();
}
int main()
{
	function_friend();



	//MyData bankData;
	//bankData.pass=87655; error
	//bankData.PrintMyAccDetails();
	return 0;
}



