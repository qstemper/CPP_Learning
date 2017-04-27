#include <iostream>
#include <string>

using namespace	std;

int				main()
{
	int			ageUser(24);
	// l'etoile permet de dire que l'on declare un pointeur
	int			*pointer(0);

	// ici on veut afficher l'adresse de la ou est stockee la variable
	pointer = &ageUser;
	cout << "The adress of ageUser is " << &ageUser << "." << endl;
	cout << "Pointer vaults " << pointer << "." << endl;
	cout << "The adress of pointer is " << &pointer << "." << endl;
	// ici on dereference (on utilise l'etoile) pour obtenir la valeur de ageUser
	cout << "The value is " << *pointer << endl;
	return (0);
}
