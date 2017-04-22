#include <iostream>

using namespace		std;

int					main()
{
	unsigned int	i;
	bool			adult;

	cout << "Are you an adult ? (answer by 1 (true) or 0 (false))" << endl;
	cin >> i;
	if (i == 1)
	{
		adult = true;
		cout << "You are an adult" << endl;
	}
	else if (i == 0)
	{
		adult = false;
		cout << "You are not an adult" << endl;
	}
	else
	{
		adult = false;
		cout << "ALERT, ALERT ! ALIEN SPOTTED ! ALERT, ALERT !" << endl;
	}
	return (0);
}
