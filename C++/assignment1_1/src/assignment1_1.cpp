//============================================================================
// Name        : assignment1_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
struct Employee
{
	int empID;
	char empName[20];
	int empSalary;
	void acceptdata()
	{
		scanf("%d",&empID);
		scanf("%s",empName);
		scanf("%d",&empSalary);
	}
	void printdata()
	{
		printf("Employee ID:%d\n",empID);
		printf("Employee Name:%s",empName);
		printf("\nEmployee salary:%d",empSalary);
	}
};
int main()
{
	Employee e;
	e.acceptdata();
	e.printdata();
	return 0;
}
