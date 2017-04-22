#include <iostream>
#include <string>

using namespace		std;

int					main()
{
	unsigned int	nbChild;

	cout << "How many children do you have ?" << endl;
	cin >> nbChild;
	if (nbChild > 1)
		cout << "You have " << nbChild << " children ! Bravo." << endl;
	else if (nbChild == 1)
		cout << "You have " << nbChild << " child ! Bravo." << endl;
	else
		cout << "What a shame ! You have no child." << endl;
	return (0);
}
