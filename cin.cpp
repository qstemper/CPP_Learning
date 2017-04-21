#include <iostream>
#include <string>

using namespace std;

int		main()
{
	int		userAge(0);
	string	userName("Unknown");
	double	userPi(-1.);

	// cin s'arrete au premier espace ou retour a la ligne
	// utiliser getline() pour obtenir toute la ligne
	// si cin utiliser avant getline, utiliser cin.ignore()

	cout << "How old are you ?" << endl;
	cin >> userAge;
	cout << "You are " << userAge << " years old !" << endl;
	cin.ignore();

	cout << "What's your name ?" << endl;
	getline(cin, userName);
	cout << "Everybody calls you " << userName << endl;

	cout << "What is the value of PI ?" << endl;
	cin >> userPi;
	cout << "You think that the value of PI is : " << userPi << endl;
	return (0);
	
}
