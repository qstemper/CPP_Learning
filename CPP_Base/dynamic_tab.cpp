#include <iostream>
#include <string>
#include <vector> // Obligatoire pour utiliser les tableaux dynamiques

/***************************** IMPORTANT **************************************/
//				Les fonctions en C++ s'utilisent de la facon suivante	      //
//																			  //
//							nomVar.nomFct(argument)							  //
//																			  //
/******************************************************************************/

using namespace 	std;

int					main()
{
	vector <int>	tab(5, 666); // set toutes les cases du tableau a 666
	unsigned int	i;
	unsigned int	sizeTab;

	i = -1;
	sizeTab = tab.size(); // size nous donne la taille du tableau
	while (++i < 5)
		cout << tab[i] << endl;
	cout << "Taille de tab : " << sizeTab << endl;
	while (i < 10)
	{
		tab.push_back(42 + i); // ajoute une case au tableau contenant la valeur 42
		cout << tab[i] << endl;
		i++;
	}
	sizeTab = tab.size();
	cout << "Taille de tab : " << sizeTab << endl;
	return (0);
}
