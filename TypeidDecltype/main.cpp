#include <iostream>
#include "Generic.cpp"

int funI()
{
	return 10;
}

double funD()
{
	return 10.5;
}

int main()
{
	int i1 = 5;
	double d1 = 2.5;
	double d2 = 3.5;

	if (typeid(d1) == typeid(d2))
	{
		std::cout << "This is the same type\n";
	}
	else
	{
		std::cout << "This is different type\n";
	}

	if (typeid(i1) == typeid(d1))
	{
		std::cout << "This is the same type\n";
	}
	else
	{
		std::cout << "This is different type\n";
	}

	std::cout << "This variable type is " << typeid(i1).name() << '\n';
	std::cout << "This variable type is " << typeid(d1).name() << '\n';

	decltype(funI()) decl1;
	decltype(funD()) decl2;
	std::cout << typeid(decl1).name() << '\n';
	std::cout << typeid(decl2).name() << '\n';

	int x = 5;
	decltype(x) y = x - 2;
	std::cout << typeid(y).name() << '\n';

	std::cout << typeid(generic<int, double>(2, 5.5)).name() << '\n';
	std::cout << typeid(generic<int, double>(4, 1.5)).name() << '\n';

	return 0;
}