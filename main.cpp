
#include "TRational.h"


int main()
{
	
	TRational d1, d2, ans;
	if (d1.Write(std::cin) || d2.Write(std::cin) == 1) {
		return 0;
	}
	
	
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