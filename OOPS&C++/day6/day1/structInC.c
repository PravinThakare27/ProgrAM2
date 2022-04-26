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
};
void printTime(struct time *t)
{
	printf("\nTime=%d:%d:%d",t->hr,t->min,t->sec);
}
void acceptTime(struct time *t)
{
	printf("\nEnter Time");
	scanf("%d%d%d",&t->hr,&t->min,&t->sec);
}
void incrTime(struct time *t)
{
	t->sec++;
	if(t->sec==60)
	{
		t->sec=0;
		t->min++;
		if(t->min==60)
		{
			t->min=0;
			t->hr++;
			if(t->hr==24)
			{
				t->hr=0;
			}
		}
	}
}

int main()
{
	struct time t;
	acceptTime(&t);
	t.hr=22;
	printTime(&t);
	incrTime(&t);
	printTime(&t);
	return 0;
}






