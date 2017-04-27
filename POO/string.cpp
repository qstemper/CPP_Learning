#include <iostream>
#include <string>

using namespace	std;

// En POO, les var sont appelees attributs et les fonctions methodes
// On note l'utilisation d'une methode de cette facon
// 						objet.methode();

// Voici differentes methodesutiles du type string
//				size() -> permet de connaitre la taille de la chaine
//				erase() -> permet de supprimer tout le contenu de la chaine
//				substr() -> permet d'extraire une partie de la chaine stockee
//				c_str() -> permet de renvoyer un pointeur vers le tableau de char

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
	// substr prend deux param, le premier dit a la methode a partir d'on doit commemcer
	// le second est optionnel, de base il prendre le reste de la chain
	// mais on peut lui dire de prendre que x char
	cout << str3.substr(18) << endl;
	cout << str3.substr(3, 10) << endl;
	str3.erase();
	cout << str3 << endl;
	return (0);
}
