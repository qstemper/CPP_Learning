#include "ZFraction.h"

using namespace	std;

int				main()
{
	ZFraction a(1, 5);
	ZFraction b(1, 5);
	ZFraction c(2), d(6, 5);

//	c = a + b;
//	c.getFrac();
	if (a <= b)
		cout << "a is equal or inf to b" << endl;
	else
		cout << "a is sup to b" << endl;
	if (c >= d)
		cout << "c is equal or sup to d" << endl;
	else
		cout << "c is inf to d" << endl;
	return (0);
}
