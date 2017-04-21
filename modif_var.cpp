#include <iostream>

using namespace std;

int		main()
{
	int		number(5);
	int		a(4), b(6), res;

	cout << "(Before modification) Number == " << number <<endl;
	number = 12;
	cout << "(After modification) Number == " << number <<endl;

	res = a + b;
	cout << "Value of res = " << res << endl;

	b = a;
	cout << "Value of b = " << b << endl;
	return (0);
}
