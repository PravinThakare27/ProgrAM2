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

	void acceptArray()
	{
		cout<<"Enter "<<this->size<<"element";
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
};
int main()
{
	Array a1(5);
	a1.printArray();
	a1.acceptArray();
	a1.printArray();
	return 0;
}



