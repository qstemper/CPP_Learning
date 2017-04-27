#include <iostream>
#include <string>

using namespace	std;

// En POO, les var sont appelees attributs et les fonctions methodes
// On note l'utilisation d'une methode de cette facon
// 						objet.methode();

// Voici differentes methodesutiles du type string
//				size() -> permet de connaitre la taille de la chaine
//				erase() -> permet de supprimer tout le contenu de la chaine

int				main()
{
	string		str("Coucou ! ");
	string		str2("Commemt allez-vous ?");
	string		str3;

	// concatenation des chaines
	str3 = str + str2;
	cout << str3 << endl;
	if (str == str2)
		cout << "Les chaines sont identiques." << endl;
	else
		cout << "Les chaines isont differentes." << endl;
	cout << "Longueur de la chaine : " << str3.size() << endl;
	str3.erase();
	return (0);
}
