#include <iostream>
#include <string>
#include <fstream>

using namespace	std;

// ofstream est le type des var pour les flux dans lequel on veut ecrire

// si un fichier existe deja et que l'on veut ecrire dedans sans rien effacer
// il faut ajouter app en deuxieme parametre (append = ajouter a la fin)
// app se situe dans ios qui appartient lui meme a std
// ios n'est ni une classe ni un namespace

int				append_test()
{
	string		fileName("Test/stream1");
	ofstream	myStream(fileName.c_str(), ios::app);

	myStream << "Si vous voyez ce message et ceux du dessus c'est que append a bien fonctionne" << endl;
	return (0);
}

int				main()
{
	string		fileName("Test/stream1");
	ofstream	myStream(fileName.c_str());	// c_str obtient le nom du fichier 
											// si il est contenu dans une string
	if (myStream)
	{
		myStream << "Hello all !" << endl;
		myStream << "Just testing what I learned in C++" << endl;
		cout << "Everything Happened well" << endl;
	}
	else
		cout << "ERROR ! Can't open the file for some reasons" << endl;
	append_test();
	return (0);
}
