#include <iostream>

using namespace	std;

int				main()
{
	int			*ptr;

	// on demande a l'ordi de nous donner une case memoire
	ptr = new int;
	cout << "How old are you" << endl;
	cin >> *ptr;
	cout << "You are " << *ptr << " years old !" << endl;
	// on libere la memoire qui nous a ete donnee
	delete ptr;
	// le pointeur ne pointe plus vers rien
	ptr = 0;
	return (0);
}
