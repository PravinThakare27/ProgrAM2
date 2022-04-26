
#include <iostream>
using namespace std;


int main()
{
		//int *ptr=(int*)malloc(4);
		//free(ptr);
		int *ptr=new int;
		*ptr=22;
		cout<<" *ptr="<<*ptr;
		delete ptr;
		ptr=NULL;


		//int *arrPtr=(int*)malloc(16);
		//free(arrPtr);

		int *ptrArr=new int[4];
		cout<<"\nEnter 4 int";
		for (int i = 0; i < 4; ++i) {
			cin>>ptrArr[i];
		}
		for (int i = 0; i < 4; ++i) {
				cout<<"  "<<ptrArr[i];
			}
		delete[]ptrArr;
		ptrArr=NULL;











	return 0;
}
