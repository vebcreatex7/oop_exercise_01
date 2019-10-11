
#include "TRational.h"


int main()
{
	int a, b, c, d;
	char z;
	std::cin >> a >> z >> b >> c>> z >> d;
	if (b == 0 || d == 0) {
		std::cout << "Error. Division by zero\n";
		return 0;
	}
	TRational d1(a, b), d2(c, d), ans;
	std::cout << "Add = ";
	ans = d1.Add(d2);
	ans.Print();
	std::cout << "\nSub = ";
	ans = d1.Sub(d2);
	ans.Print();
	std::cout << "\nMul = ";
	ans = d1.Mul(d2);
	ans.Print();
	std::cout << "\nDiv = ";
	ans = d1.Div(d2);
	ans.Print();
	std::cout << "\n";
	if (d1.Compare(d2) == 1) {
		d1.Print();
		std::cout << " > ";
		d2.Print();
	} else if (d1.Compare(d2) == 0) {
		d1.Print();
		std::cout << " = ";
		d2.Print();
	} else {
		d1.Print();
		std::cout << " < ";
		d2.Print();
	}
}