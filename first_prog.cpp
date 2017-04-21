#include <iostream>
#include <string>

using namespace std;

int			main()
{
	double	a;
	double	b;
	double	res;
	string	str;

	cout << "Welcome to your operation program !" << endl;
	cout << "Enter a value for A" << endl;
	cin >> a;
	cout << "Enter a value for B" << endl;
	cin >> b;
	res = a - b;
	cout << "The result of a - b is : " << res << endl;

	return (0);
}
