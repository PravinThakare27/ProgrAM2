//============================================================================
// Name        : assignment1_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<stdio.h>
int cal(int a=0,int b=0,int c=0,int d=0)
{int res;
 res=a+b+c+d;
 printf("\n a=%d b=%d c=%d d=%d",a,b,c,d);
 return res;
}

	int main()
{
		int res;
	res=cal(500,400,600);
	res=cal(600,500);
	res=cal(500,600,5000,6500);
	printf("\nbill is =%d",res);
	return 0;
}
