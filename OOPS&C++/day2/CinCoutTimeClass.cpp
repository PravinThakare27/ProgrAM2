/*
 * day2_1.cpp
 *
 *  Created on: 05-Sep-2019
 *      Author: pradnya
 */


using namespace std;
#include<iostream>
class time1
{
private:
	int hr;
	int min;
	int sec;
public:
	//parameter less constructor
//	time()
//	{
//		printf("\nparameter less constructorobj created..:)");
//		this->hr=0;
//		this->min=0;
//		this->sec=0;
//	}
	time1(int h=0,int m=0,int s=0)
	{
		cout<<"\nparameterized constructor obj created..:)";
		this->hr=h;
		this->min=m;
		this->sec=s;
	}
	void initTime()
	{
		this->hr=0;
		this->min=0;
		this->sec=0;
	}
	//Mutators/setter
	void setHour(int hr)
	{
		if(hr>=0 && hr<24)
			this->hr=hr;
		else
			cout<<"\ninvalid input";
	}
	//inspector/getter
	int getSecond()
	{
		return this->sec;
	}
	//facilitator
	void printTime()
	{
		cout<<"\nTime=%d:%d:%d",this->hr,this->min,this->sec;
	}
	//facilitator
	void acceptTime()
	{
		cout<<"\nEnter Time";
		cin>>this->hr>>this->min>>this->sec;
	}
	//facilitator
	void incrTime()
	{
		sec++;
		if(sec==60)
		{
			sec=0;
			min++;
			if(min==60)
			{
				min=0;
				hr++;
				if(hr==24)
				{
					hr=0;
				}
			}
		}
	}
	~time1()
	{
		cout<<"\nbye bye.. :)";
	}
};//end of struct
int main()
{
	time1 t(11,2,33);
	//t.initTime();
	//t.acceptTime();
	//t.hr=22;//error
	int sec=t.getSecond();
	cout<<"\nsecond="<<sec;
	t.printTime();
	t.setHour(44);
	//t.incrTime();
	t.printTime();
	return 0;
}
















