//============================================================================
// Name        : assignment1_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>;

void add(int a,int b,int c,float d)
{
	float sum=a+b+c+d;
	printf("\n sum is =%f",sum);
}
void add(int a,int b,float c,float d)
{
	float sum=a+b+c+d;
	printf("\n sum is =%f",sum);
}
void add(int a,float b,float c,float d)
{
	float sum=a+b+c+d;
	printf("\n sum is =%f",sum);
}
void add(int a,int b,int c,int d)
{
	int sum=a+b+c+d;
	printf("\n sum is =%d",sum);
}
void add(float a,float b,float c,float d)
{
	float sum=a+b+c+d;
    printf("\n sum is =%f",sum);
}
int main()
{
	int sum;
	add(2,5,6,5.3f);
	add(5,6,5.5f,6.2f);
	add(8,6.6f,5.3f,3.2f);
	add(5,6,5,7);
	add(5.5f,6.5f,8.6f,9.5f);
	add(8,6.6f,5.3f,3.2f);

}
