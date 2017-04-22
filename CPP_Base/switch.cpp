#include <iostream>

using namespace	std;

int				main()
{
	int			nbChild;

	cout << "How many children do you have ?" << endl;
	cin >> nbChild;

	switch (nbChild)
	{
		case 0 :
			cout << "So you got no children ?" << endl;
			break ;
		case 1 :
			cout << "Well well well, the second is provided for when ?" << endl;
			break ;
		case 2 :
			cout << "What lovely children we have here !" << endl;
			break ;
		default :
			cout << "You should think about stopping now, shouldn't you ?" << endl;
			break ;
	}
	return (0);
}
