#include <iostream>
using namespace std;



class Array
{
private:
	int size;
	int *ptr;
public:
	Array()
	{
		this->size=0;
		ptr=NULL;
	}
	Array(int s)
	{
		this->size=s;
		this->ptr=new int[this->size];
		for (int i = 0; i < this->size; ++i) {
			this->ptr[i]=0;
		}
	}
	Array(Array &a1)
	{
		this->size=a1.size;
		this->ptr=new int[this->size];
		for(int i=0;i<this->size;i++)
		{
			this->ptr[i]=a1.ptr[i];
		}
	}

	void acceptArray()
	{
		cout<<"\nEnter "<<this->size<<"element";
		for (int i = 0; i < this->size; ++i) {
					cin>>this->ptr[i];
				}
	}
	void printArray()
	{
		for (int i = 0; i < this->size; ++i) {
			cout<<"\nptr["<<i<<"]="<<this->ptr[i];
		}
	}
	~Array()
	{
		if(this->ptr!=NULL)
		{
			delete []this->ptr;
			this->ptr=NULL;
		}
	}
};
int main()
{
	Array a1(5);
	a1.printArray();
	a1.acceptArray();
	a1.printArray();

	Array a2(a1);
	cout<<"\n a2=\n";
	a2.printArray();

	return 0;
}



