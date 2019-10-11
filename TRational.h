#ifndef _CLASS_H_
#define _CLASS_H_
#include <iostream>
#include <cstdlib>
#include <math.h>

class TRational {
private:
	int a;
	int b;
public:
	TRational(){}
	TRational(int a, int b);
	int Write(std::istream&);
	const TRational Add(const TRational &d1);
	const TRational Div(const TRational &d1);
	const TRational Sub(const TRational &d1);
	const TRational Mul(const TRational &d1);
	int Compare(const TRational &d1);
	void Reduce();
	void Print();
};

#endif