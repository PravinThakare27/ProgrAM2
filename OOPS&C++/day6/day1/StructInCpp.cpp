/*
 * StructInCpp.cpp
 *
 *  Created on: 04-Sep-2019
 *      Author: pradnya
 */
/*
 * structInC.c
 *
 *  Created on: 04-Sep-2019
 *      Author: pradnya
 */
#include<stdio.h>

struct time
{
	int hr;
	int min;
	int sec;
	void printTime()
	{
		printf("\nTime=%d:%d:%d",hr,min,sec);
	}
	void acceptTime()
	{
		printf("\nEnter Time");
		scanf("%d%d%d",&hr,&min,&sec);
	}
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
};//end of struct
int main()
{
	time t;
	t.acceptTime();
	t.hr=22;//?
	t.printTime();
	t.incrTime();
	t.printTime();
	return 0;
}










