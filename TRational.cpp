#include "TRational.h"



int TRational::Write(std::istream& in) {
	int a, b;
	char c;
	in >> a;
	in >> c;
	in >> b;
	if (b == 0) {
		std::cout << "Error. Division by zero\n";
		return 1;
	}
	this->a = a;
	this->b = b;
	return 0;
}

TRational::TRational(int m_a, int m_b) : a(m_a), b(m_b) {
}
void TRational::Reduce()
{
	int x = abs(this->a);
	int y = abs(this->b);
	if (x == 0 || y == 0) {
		return;
	}
	while (x != y) {
		if (x < y) {
			y -= x;
		} else {
			x -= y;
		}	
	}
	this->a = this->a / x;
	this->b = this->b / x;
}

const TRational TRational::Add(const TRational &d1)
{
	TRational tmp(a * d1.b + b * d1.a, b * d1.b);
	tmp.Reduce();
	return tmp;
	
}
const TRational TRational::Div(const TRational &d1)
{
	TRational tmp(a * d1.b,  b * d1.a);
	tmp.Reduce();
	return tmp;
}
const TRational TRational::Sub(const TRational &d1)
{
	TRational tmp(a * d1.b - b * d1.a, b * d1.b);
	tmp.Reduce();
	return tmp;
}

const TRational TRational::Mul(const TRational &d1)
{
	TRational tmp(a * d1.a, b * d1.b);
	tmp.Reduce();
	return tmp;
}

int TRational::Compare(const TRational& d1)
{
	if (a * d1.b > b * d1.a) {
		return 1;
		
	} else if (a * d1.b == b * d1.a) {
		return 0;

	} else {
		return 2;
	}
	
}

void TRational::Print(std::ostream& os) {
	if (this->a == 0 || this->b == 0) {
		os << 0;
		return;
	}
	os << this->a << "/" << this->b;
}