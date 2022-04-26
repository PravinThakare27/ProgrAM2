/*
 * maths.h
 *
 *  Created on: 10-Sep-2019
 *      Author: pradnya
 */

#ifndef MATHS_H_
#define MATHS_H_
class complex
{
	int real,imag;
public:
	complex(int r=1,int i=1);
	void print();
};

class point
{
	int x,y;
public:
	point(int x=1,int y=1);
	void print();
};


#endif /* MATHS_H_ */
