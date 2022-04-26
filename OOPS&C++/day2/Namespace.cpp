/*
 * Namespace.cpp
 *
 *  Created on: 05-Sep-2019
 *      Author: pradnya
 */
#include <stdio.h>
namespace NA
{
	int connection=44;
}
namespace NB
{
	int connection=66;
	int num1=11;
	int num2=12;
	int num3=13;
	int num4=14;
	int num5=15;
}

using namespace NB;
int main()
{
	printf("%d",NA::connection);
	printf("\n%d",connection);
	printf("\n%d",num1);
}






