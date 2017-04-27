#include <iostream>
#include <string>

using namespace	std;

int				main()
{
	string		a;
	string		b;
	string		c;
	string		*userAns;
	char		answer;

	a = "Fear of lotery games";
	b = "Fear of darkness";
	c = "Fear of fridays thirteen";
	cout << "What is 'kenophobia' ?" << endl;
	cout << "\tA) " << a << endl;
	cout << "\tB) " << b << endl;
	cout << "\tC) " << c << endl;
	cout << "Your answer ? (a, b or c)" << endl;
	cin >> answer;
	if (answer == 'a')
		userAns = &a;
	else if (answer == 'b')
		userAns = &b;
	else if (answer == 'c')
		userAns = &c;
	else
	{
		cout << "No answer were found !" << endl;
		return (1);
	}
	cout << "You choose the answer : "  << *userAns << endl;
	return (0);
}
