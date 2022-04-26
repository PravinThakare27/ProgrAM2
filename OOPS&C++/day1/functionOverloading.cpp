/*
 * proj3.cpp
 *
 *  Created on: 04-Sep-2019
 *      Author: pradnya
 */
#include<stdio.h>
void print(int n)
{
	printf("\n n=%d",n);
}
void print(int n,int m)
{
	printf("\n n=%d m=%d",n,m);
}
void print(int n,char c)
{
	printf("\n n=%d c=%c",n,c);
}
void print(char c,int n)
{
	printf("\n c=%c n=%d ",c,n);
}
void print(int n,int m,int l)
{
	printf("\n n=%d m=%d l=%d",n,m,l);
}
int main()
{
	print(11,22,33);
	return 0;
}
