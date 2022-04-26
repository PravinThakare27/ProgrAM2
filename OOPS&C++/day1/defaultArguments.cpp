/*
 * proj2.cpp
 *
 *  Created on: 04-Sep-2019
 *      Author: pradnya
 */
#include<stdio.h>
int add(int a=0,int b=0,int c=0,int d=0)
{
	int res;
	printf("\na=%d b=%d c=%d d=%d",a,b,c,d);
	res=a+b+c+d;
	return res;
}
int main()
{
	int bill;
	bill=add(1,2,3,4);
	bill=add(1,2,3);
	bill=add(1,2);
	bill=add(1);
	bill=add();
	printf("\n bill =%d",bill);
	return 0;








}



















